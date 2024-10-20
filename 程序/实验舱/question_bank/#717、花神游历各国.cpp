#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long maxn,val;
};

int n,m;
int op,l,r;
node tree[4000005];
long long a[1000005];

void build(int p,int l,int r){
    tree[p] = {l,r,0,0};
    if(l == r){
        tree[p].val = a[l];
        tree[p].maxn = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(2 * p,l,mid);
    build(2 * p + 1,mid + 1,r);
    tree[p].val = tree[2 * p].val + tree[2 * p + 1].val;
    tree[p].maxn = max(tree[2 * p].maxn,tree[2 * p + 1].maxn);
}

void update(int p,int l,int r){
    if(tree[p].maxn <= 1) return;
    if(tree[p].l == tree[p].r){
        tree[p].val = sqrt(tree[p].val);
        tree[p].maxn = tree[p].val;
        return;
    }
    int mid = (tree[p].l + tree[p].r) >> 1;
    if(l <= mid){
        update(2 * p,l,r);
    }
    if(r > mid){
        update(2 * p + 1,l,r);
    }
    tree[p].val = tree[2 * p].val + tree[2 * p + 1].val;
    tree[p].maxn = max(tree[2 * p].maxn,tree[2 * p + 1].maxn);
}

long long query(int p,int l,int r){
    if(l <= tree[p].l && r >= tree[p].r){
        return tree[p].val;
    }
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    build(1,1,n);
    scanf("%d",&m);
    while(m --){
        scanf("%d %d %d",&op,&l,&r);
        if(op == 1){
            printf("%lld\n",query(1,l,r));
        }else{
            update(1,l,r);
        }
    }

    return 0;
}