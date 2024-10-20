#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long val,tag;
};

int n,m,s,op,u,v,cur;
int t[1000005],val[1000005];
long long x;
node tree[4000005];
int fir[1000005],las[1000005];
int fa[1000005];
vector<int> a[1000005];

void erg(int u){
    fir[u] = ++ cur;
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
    }
    las[u] = cur;
}

void build(int pos,int l,int r){
    tree[pos].l = l,tree[pos].r = r;
    if(l == r){
        tree[pos].val = (long long)val[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(pos * 2,l,mid);
    build(pos * 2 + 1,mid + 1,r);
    tree[pos].val = tree[pos * 2].val + tree[pos * 2 + 1].val;
}

void pushdown(int pos){
    if(tree[pos].l == tree[pos].r || !tree[pos].tag) return;
    tree[pos * 2].val += tree[pos].tag * (tree[pos * 2].r - tree[pos * 2].l + 1);
    tree[pos * 2 + 1].val += tree[pos].tag * (tree[pos * 2 + 1].r - tree[pos * 2 + 1].l + 1);
    tree[pos * 2].tag += tree[pos].tag;
    tree[pos * 2 + 1].tag += tree[pos].tag;
    tree[pos].tag = 0;
}

void update(int pos,int l,int r,long long x){
    if(tree[pos].l >= l && tree[pos].r <= r){
        tree[pos].val += x * (tree[pos].r - tree[pos].l + 1);
        tree[pos].tag += x;
        return;
    }
    pushdown(pos);
    int mid = (tree[pos].l + tree[pos].r) >> 1;
    if(l <= mid){
        update(pos * 2,l,r,x);
    }
    if(r > mid){
        update(pos * 2 + 1,l,r,x);
    }
    tree[pos].val = tree[pos * 2].val + tree[pos * 2 + 1].val;
}

long long find(int pos,int l,int r){
    if(l <= tree[pos].l && r >= tree[pos].r){
        return tree[pos].val;
    }
    pushdown(pos);
    long long res = 0;
    int mid = (tree[pos].l + tree[pos].r) >> 1;
    if(l <= mid){
        res += find(pos * 2,l,r);
    }
    if(r > mid){
        res += find(pos * 2 + 1,l,r);
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

    scanf("%d %d %d",&n,&m,&s);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    erg(s);
    for(int i = 1;i <= n;i ++){
        val[fir[i]] = t[i];
    }
    build(1,1,n);
    while(m --){
        scanf("%d %d",&op,&u);
        if(op == 1){
            scanf("%lld",&x);
            update(1,fir[u],las[u],x);
        }else{
            printf("%lld\n",find(1,fir[u],las[u]));
        }
    }

    return 0;
}