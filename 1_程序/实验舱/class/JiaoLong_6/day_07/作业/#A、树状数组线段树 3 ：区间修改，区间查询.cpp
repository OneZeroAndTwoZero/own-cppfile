#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long tag,val;
};

int n,q;
int op,l,r;
node tree[4000005];
long long x,a[1000005];

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

void update(int p,int l,int r,long long val){
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

long long query(int p,int l,int r){
    if(l <= tree[p].l && r >= tree[p].r){
        return tree[p].val;
    }
    pushdown(p);
    int mid = (tree[p].l + tree[p].r) >> 1;
    long long res = 0;
    if(l <= mid){
        res += query(2 * p,l,r);
    }
    if(r > mid){
        res += query(2 * p + 1,l,r);
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

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    build(1,1,n);
    while(q --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d %lld",&l,&r,&x);
            update(1,l,r,x);
        }else{
            scanf("%d %d",&l,&r);
            printf("%lld\n",query(1,l,r));
        }
    }

    return 0;
}