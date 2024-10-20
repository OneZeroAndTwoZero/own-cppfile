#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long tag,val;
};

int m,p;
int nxt = 0,now = 0;
char op;
int l;
node tree[4000005];
long long x,a[1000005];

void pushdown(int p){
    if(tree[p].l == tree[p].r || tree[p].tag == 0) return;
    tree[2 * p].val = max(tree[p].tag,tree[2 * p].val);
    tree[2 * p + 1].val = max(tree[p].tag,tree[2 * p + 1].val);
    tree[2 * p].tag = max(tree[p].tag,tree[2 * p].tag);
    tree[2 * p + 1].tag = max(tree[p].tag,tree[2 * p + 1].tag);
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
    tree[p].val = max(tree[2 * p].val,tree[2 * p + 1].val);
}

void update(int p,int l,int r,long long val){
    if(l <= tree[p].l && r >= tree[p].r){
        tree[p].val = max(val,tree[p].val);
        tree[p].tag = max(tree[p].tag,val);
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
    tree[p].val = max(tree[2 * p].val,tree[2 * p + 1].val);
}

long long find(int p,int l,int r){
    if(l <= tree[p].l && r >= tree[p].r){
        return tree[p].val;
    }
    pushdown(p);
    int mid = (tree[p].l + tree[p].r) >> 1;
    long long res = 0;
    if(l <= mid){
        res = max(find(2 * p,l,r),res);
    }
    if(r > mid){
        res = max(find(2 * p + 1,l,r),res);
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

    cin >> m >> p;
    build(1,1,m);
    while(m --){
        cin >> op;
        if(op == 'A'){
            cin >> x;
            // 记得提前更新now
            ++ now;
            update(1,now,now,(nxt + x) % p);
        }else{
            cin >> l;
            nxt = find(1,now - l + 1,now);
            cout << nxt << "\n";
        }
    }

	return 0;
}