#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    int tag,val;
};

int n,q,l,r;
string s;
char op,x;
node tree[4000005];
int a[1000005];
int turn[133];

void pushup(int p){
    tree[p].val = tree[2 * p].val | tree[2 * p + 1].val;
}

void push(int p,int val){
    tree[p].val = val;
    tree[p].tag = val;
}

void pushdown(int p){
    if(!tree[p].tag || tree[p].l == tree[p].r) return;
    push(2 * p,tree[p].tag);
    push(2 * p + 1,tree[p].tag);
    tree[p].tag = 0;
}

void build(int p,int l,int r){
    tree[p] = {l,r,0,0};
    if(l == r){
        tree[p].val = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(2 * p,l,mid);
    build(2 * p + 1,mid + 1,r);
    pushup(p);
    // cout << p << " " << tree[p].val << ";;\n";
}

void update(int p,int l,int r,int val){
    if(l <= tree[p].l && r >= tree[p].r){
        tree[p].val = val;
        tree[p].tag = val;
        return;
    }
    pushdown(p);
    int mid = (tree[p].l + tree[p].r) >> 1;
    if(l <= mid){
        update(2 * p,l,r,val);
    }
    if(r > mid){
        update(2 * p + 1,l,r,val);
    }
    pushup(p);
}

int query(int p,int l,int r){
    if(l <= tree[p].l && r >= tree[p].r){
        return tree[p].val;
    }
    pushdown(p);
    int mid = (tree[p].l + tree[p].r) >> 1;
    int res = 0;
    if(l <= mid){
        res |= query(2 * p,l,r);
    }
    if(r > mid){
        res |= query(2 * p + 1,l,r);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    turn['A'] = 1,turn['B'] = 2,turn['C'] = 4;
    cin >> n >> s >> q;
    for(int i = 1;i <= n;i ++){
        a[i] = turn[s[i - 1]];
    }
    build(1,1,n);
    while(q --){
        cin >> op >> l >> r;
        if(op == 'A'){
            cin >> x;
            update(1,l,r,turn[x]);
        }else{
            int cur = query(1,l,r);
            if((cur & 1) + ((cur & 2) >> 1) + ((cur & 4) >> 2) > 1){
                printf("No\n");
            }else if(l != 1 && r != n 
            && (query(1,r + 1,r + 1) & query(1,l - 1,l - 1))){
                printf("No\n");
            }else{
                printf("Yes\n");
            }
        }
    }

    return 0;
}