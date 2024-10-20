#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct tem{
    long long di;
    int sizei;
};

struct node{
    int l,r;
    long long val,tag;
    tem minn;
};

int n,m;
int u,v,op;
int nodepos = 0;
vector<int> a[200006];
int fa[200006];
int dep[200006];
int size[200006]; // sons' number
int son[200006]; // heavy son
int top[200006]; // the top of the chain including it
int dfn[200006];
int rnk[200006]; // rnk[dfn[i]] = i
long long sub[200006];
long long val[200006];
long long d[2000006];
long long sum[200006];
node tree[800006];

// first dfs to get fa,dep,cnt,son
void erg(int u,int from){
    son[u] = -1,size[u] = 1;
    dep[u] = dep[from] + 1;
    sub[u] = val[u];
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i,u);
        sub[u] += sub[i];
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

int cmp(tem a,tem b){
    if(a.di < b.di) return -1;
    if(a.di > b.di) return 1;
    if(a.sizei < b.sizei) return -1;
    if(a.sizei > b.sizei) return 1;
    return 0;
}

void pushup(int pos){
    int cur = cmp(tree[2 * pos].minn,tree[2 * pos + 1].minn);
    if(cur == -1){
        tree[pos].minn = tree[2 * pos].minn;
        tree[pos].val = tree[2 * pos].val;
    }else if(cur == 1){
        tree[pos].minn = tree[2 * pos + 1].minn;
        tree[pos].val = tree[2 * pos + 1].val;
    }else{
        tree[pos].minn = tree[2 * pos].minn;
        tree[pos].val = tree[2 * pos].val + tree[2 * pos + 1].val;
    }
}

void add(int pos,long long val){ // add val
    tree[pos].minn.di += val;
    tree[pos].tag += val;
}

void pushdown(int pos){
    if(!tree[pos].tag) return;
    add(2 * pos,tree[pos].tag);
    add(2 * pos + 1,tree[pos].tag);
    tree[pos].tag = 0;
}

// build the tree
void build(int pos,int l,int r){
    tree[pos].l = l,tree[pos].r = r;
    if(l == r){
        tree[pos].val = rnk[l]; // to use dfn
        tree[pos].minn = {d[rnk[l]],size[rnk[l]]};
        return;
    }
    int mid = (l + r) >> 1;
    build(2 * pos,l,mid);
    build(2 * pos + 1,mid + 1,r);
    pushup(pos);
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&val[i]);
        sum[i] = val[i];
    }
    sort(sum + 1,sum + n + 1);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // start from root
    erg(1,1);
    dfs(1,1);
    for(int i = 1;i <= n;i ++) sum[i] += sum[i - 1];
    for(int i = 1;i <= n;i ++){
        d[i] = sub[i] - sum[size[i]];
    }
    build(1,1,n);
    while(m --){
        scanf("%d %d",&u,&v);
        int lca = getLCA(u,v);
        updatePath(lca,u,val[v] - val[u]);
        updatePath(lca,v,val[u] - val[v]);
        swap(val[u],val[v]);
        printf("%lld\n",tree[1].val);
    }

    return 0;
}