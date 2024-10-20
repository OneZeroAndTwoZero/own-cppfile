#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1,cid;
int u,v;
vector<int> a[100005];
stack<int> s;
int dfn[100005];
int low[100005];
bool vis[100005];
int scc[100005];
int size[100005];
int maxn = 0,st;

void tarjan(int u){
    dfn[u] = low[u] = pos ++;
    s.push(u);
    vis[u] = 1;
    for(auto && i : a[u]){
        // use dfn to check that the point has been visited
        if(!dfn[i]){
            tarjan(i);
            low[u] = min(low[i],low[u]);
        }else if(vis[i]){
            low[u] = min(low[u],dfn[i]);
        }
    }
    if(low[u] != dfn[u]) return;
    cid ++;
    while(1){
        int t = s.top();
        s.pop();
        scc[t] = cid;
        size[cid] ++;
        vis[t] = 0;
        if(t == u) break;
    }
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
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n;i ++){
        // use dfn to check that the point has been visited
        if(dfn[i]) continue;
        tarjan(i);
    }
    printf("%d\n",cid);
    for(int i = 1;i <= cid;i ++){
        maxn = max(maxn,size[i]);
    }
    printf("%d\n",maxn);
    for(int i = 1;i <= n;i ++){
        if(size[scc[i]] == maxn){
            st = scc[i];
            break;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(scc[i] == st){
            printf("%d ",i);
        }
    }

    return 0;
}
