#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long val,tag;
};

int n,m,s;
int u,v,op;
int nodepos = 0;
vector<int> a[1000006];
int fa[1000006];
int dep[1000006];
int size[1000006]; // sons' number
int son[1000006]; // heavy son
int top[1000006]; // the top of the chain including it
int dfn[1000006];
int rnk[1000006]; // rnk[dfn[i]] = i
long long mod,x;
long long val[10000006];
node tree[4000006];

// first dfs to get fa,dep,cnt,son
void erg(int u,int from){
    son[u] = -1,size[u] = 1;
    dep[u] = dep[from] + 1;
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i,u);
        size[u] += size[i];
        if(son[u] == -1 || size[i] > size[son[u]]){
            son[u] = i;
        }
    }
}

// second dfs to get top,dfn,rnk
void dfs(int u,int tp){
    top[u] = tp;
    dfn[u] = ++nodepos,rnk[nodepos] = u;
    if(son[u] != -1){
        // first to go into heavy son
        // to make the nodepos of the chain is continuous
        dfs(son[u],tp);
    }
    for(auto && i : a[u]){
        if(i == fa[u] || i == son[u]) continue;
        // create a new chain
        dfs(i,i);
    }
}

int getLCA(int u,int v){
    // while they don't in a same chain
    while(top[u] != top[v]){
        // to compare the deep of the top of the chain
        if(dep[top[u]] > dep[top[v]]){
            u = fa[top[u]];
        }else{
            v = fa[top[v]];
        }
    }
    if(dep[u] < dep[v]) return u;
    return v;
}

void pushup(int pos){
    tree[pos].val = (tree[2 * pos].val + tree[2 * pos + 1].val) % mod;
}

void add(int pos,long long val){ // add val
    tree[pos].val = (tree[pos].val + (tree[pos].r - tree[pos].l + 1) * val) % mod;
    tree[pos].tag = (tree[pos].tag + val) % mod;
}

void pushdown(int pos){
    if(!tree[pos].tag) return;
    add(2 * pos,tree[pos].tag);
    add(2 * pos + 1,tree[pos].tag);
    tree[pos].tag = 0;
}

// build the tree
void build(int pos,int l,int r){
    tree[pos] = {l,r,0LL,0LL};
    if(l == r){
        tree[pos].val = val[rnk[l]]; // to use dfn
        return;
    }
    int mid = (l + r) >> 1;
    build(2 * pos,l,mid);
    build(2 * pos + 1,mid + 1,r);
    pushup(pos);
}

// search
long long query(int pos,int l,int r){
    if(l <= tree[pos].l && tree[pos].r <= r){
        return tree[pos].val % mod;
    }
    pushdown(pos);
    long long res = 0;
    int mid = (tree[pos].l + tree[pos].r) >> 1;
    if(l <= mid){
        res = (res + query(2 * pos,l,r)) % mod;
    }
    if(r >= mid + 1){
        res = (res + query(2 * pos + 1,l,r)) % mod;
    }
    return res;
}

// update
void update(int pos,int l,int r,long long val){
    if(l <= tree[pos].l && tree[pos].r <= r){
        add(pos,val);
        return;
    }
    int mid = (tree[pos].l + tree[pos].r) >> 1;
    pushdown(pos);
    if(l <= mid)
        update(2 * pos,l,r,val);
    if(r >= mid + 1)
        update(2 * pos + 1,l,r,val);
    pushup(pos);
}

// add val in a path
void updatePath(int u,int v,long long val){
    while(top[u] != top[v]){
        // make dep[top[u]] >= dep[top[v]]
        if(dep[top[u]] < dep[top[v]]){
            swap(u,v);
        }
        // update the chain
        update(1,dfn[top[u]],dfn[u],val);
        // jump
        u = fa[top[u]];
    }
    // the last update(u,v in the same chain)
    // make dep[v] >= dep[u]
    if(dep[u] > dep[v]){
        swap(u,v);
    }
    update(1,dfn[u],dfn[v],val);
}

// search the sum of the chain
long long queryPath(int u,int v){
    long long res = 0;
    while(top[u] != top[v]){
        // make dep[top[u]] >= dep[top[v]]
        if(dep[top[u]] < dep[top[v]]){
            swap(u,v);
        }
        res = (res + query(1,dfn[top[u]],dfn[u])) % mod;
        u = fa[top[u]];
    }
    // the last update(u,v in the same chain)
    // make dep[v] >= dep[u]
    if(dep[u] > dep[v]){
        swap(u,v);
    }
    res = (res + query(1,dfn[u],dfn[v])) % mod;
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

    scanf("%d %d %d %lld",&n,&m,&s,&mod);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&val[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // start from root
    erg(s,s);
    dfs(s,s);
    build(1,1,n);
    while(m --){
        scanf("%d %d",&op,&u);
        if(op == 1){
            scanf("%d %lld",&v,&x);
            updatePath(u,v,x);
        }else if(op == 2){
            scanf("%d",&v);
            printf("%lld\n",queryPath(u,v));
        }else if(op == 3){
            scanf("%lld",&x);
            update(1,dfn[u],dfn[u] + size[u] - 1,x);
        }else{
            printf("%lld\n",query(1,dfn[u],dfn[u] + size[u] - 1));
        }
    }

    return 0;
}