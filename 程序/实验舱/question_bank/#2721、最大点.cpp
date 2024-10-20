#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1,cid;
int u[500005],v[500005];
vector<int> a[200005],e[200005];
stack<int> s;
int dfn[200005],low[200005];
bool vis[200005];
int scc[200005];
int ans[200005];
bool is_visit[200005];

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

int dfs(int u){
    if(is_visit[u]) return ans[u];
    is_visit[u] = 1;
    for(auto && i : e[u]){
        ans[u] = max(ans[u],dfs(i));
    }
    return ans[u];
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
        scanf("%d %d",&u[i],&v[i]);
        a[u[i]].push_back(v[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    for(int i = 1;i <= n;i ++){
        ans[scc[i]] = i;
    }
    for(int i = 0;i < m;i ++){
        if(scc[u[i]] == scc[v[i]]) continue;
        e[scc[u[i]]].push_back(scc[v[i]]);
    }
    for(int i = 1;i <= cid;i ++){
        if(is_visit[i]) continue;
        dfs(i);
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",ans[scc[i]]," \n"[i == n]);
    }

    return 0;
}