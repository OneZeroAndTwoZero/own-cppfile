#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    int tag,val;
};

int l,t,o;
int le,ri,x;
string op;
node tree[4000005];

void push(int p,int val){
    tree[p].val = val;
    tree[p].tag = val;
}

void pushdown(int p){
    if(tree[p].l == tree[p].r || tree[p].tag == 0) return;
    push(2 * p,tree[p].tag);
    push(2 * p + 1,tree[p].tag);
    tree[p].tag = 0;
}

void pushup(int p){
    tree[p].val = tree[2 * p].val | tree[2 * p + 1].val;
}

void build(int p,int l,int r){
    tree[p] = {l,r,0,(1 << 1)};
    if(l == r){
        return;
    }
    int mid = (l + r) >> 1;
    build(2 * p,l,mid);
    build(2 * p + 1,mid + 1,r);
    pushup(p);
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

    cin >> l >> t >> o;
    build(1,1,l);
    while(o --){
        cin >> op >> le >> ri;
        if(le > ri) swap(le,ri);
        if(op == "C"){
            cin >> x;
            update(1,le,ri,(1 << x));
        }else{
            int cur = query(1,le,ri),cnt = 0;
            // cout << cur << "[][]\n";
            for(int i = 1;i <= t;i ++){
                if(cur & (1 << i)) cnt ++;
            }
            cout << cnt << "\n";
        }
    }

	return 0;
}