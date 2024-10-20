#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    int tag,val;
};

int n,m;
int op,l,r;
node tree[4000005];
int a[1000005];

void pushdown(int p){
    if(tree[p].l == tree[p].r || tree[p].tag == 0) return;
    tree[2 * p].val += tree[p].tag * (tree[2 * p].r - tree[2 * p].l + 1);
    tree[2 * p + 1].val += tree[p].tag * (tree[2 * p + 1].r - tree[2 * p + 1].l + 1);
    tree[2 * p].tag += tree[p].tag;
    tree[2 * p + 1].tag += tree[p].tag;
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
    tree[p].val = tree[2 * p].val + tree[2 * p + 1].val;
}

void update(int p,int l,int r,int val){
    if(l <= tree[p].l && r >= tree[p].r){
        tree[p].val += val * (tree[p].r - tree[p].l + 1);
        tree[p].tag += val;
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
    tree[p].val = tree[2 * p].val + tree[2 * p + 1].val;
}

long long query(int p,int x){
    if(x == tree[p].l && x == tree[p].r){
        return tree[p].val;
    }
    pushdown(p);
    int mid = (tree[p].l + tree[p].r) >> 1;
    if(x <= mid) return query(2 * p,x);
    else return query(2 * p + 1,x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    build(1,1,n);
    while(m --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d",&l,&r);
            update(1,l,r,1);
        }else{
            scanf("%d",&l);
            printf("%lld\n",query(1,l) % 2);
        }
    }

    return 0;
}