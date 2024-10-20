#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,pos = 1,cid;
int u[500005],v[500005],w[500005];
vector<int> a[200005];
vector<node> e[200005];
stack<int> s;
int dfn[200005],low[200005];
bool vis[200005];
int scc[200005];
int dis[200005];

void Dijkstra(int st){
    priority_queue<node> q;
    q.push({st,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : e[t.idx]){
            if(dis[t.idx] + i.di >= dis[i.idx]) continue;
            dis[i.idx] = dis[t.idx] + i.di;
            q.push({i.idx,dis[i.idx]});
        }
    }
}

void tarjan(int u){
    dfn[u] = low[u] = pos ++;
    s.push(u);
    vis[u] = 1;
    for(auto && i : a[u]){
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
        scc[t] = cid,vis[t] = 0;
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
    for(int i = 0;i < m;i ++){
        // save edge information
        scanf("%d %d %d",&u[i],&v[i],&w[i]);
        a[u[i]].push_back(v[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    // rebuild the graph after SCC shrinkage point
    for(int i = 0;i < m;i ++){
        if(scc[u[i]] == scc[v[i]]) continue;
        e[scc[u[i]]].push_back({scc[v[i]],w[i]});
    }
    memset(dis,0x3f,sizeof(dis));
    // vis is used to mark whether a node is in the stack
    // so after tarjan explains
    // vis must be all 0
    // memset(vis,0,sizeof(vis));
    dis[scc[1]] = 0;
    Dijkstra(scc[1]);
    printf("%d\n",dis[scc[n]]);

    return 0;
}
