#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,s;
int u,v;
int nodepos = 0;
vector<int> a[1000006];
int fa[1000006];
int dep[1000006];
int size[1000006]; // sons' number
int son[1000006]; // heavy son
int top[1000006]; // the top of the chain including it
int dfn[1000006];
int rnk[1000006]; // rnk[dfn[i]] = i

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
    while (top[u] != top[v]){
        // to compare the deep of the top of the chain
        if (dep[top[u]] > dep[top[v]]){
            u = fa[top[u]];
        }else{
            v = fa[top[v]];
        }
    }
    if(dep[u] < dep[v]) return u;
    return v;
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
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // start from root
    erg(s,s);
    dfs(s,s);
    while(m --){
        scanf("%d %d",&u,&v);
        printf("%d\n",getLCA(u,v));
    }

    return 0;
}