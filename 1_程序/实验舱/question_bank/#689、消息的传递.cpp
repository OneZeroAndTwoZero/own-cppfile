#include<bits/stdc++.h>
using namespace std;

int n,m,tem,pos = 1,cid,ans;
// u,v need creative n^{2} points
int u[1000005],v[1000005];
vector<int> a[1005];
stack<int> s;
int dfn[1005],low[1005];
bool vis[1005];
int scc[1005];
int din[1005],dout[1005];

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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            scanf("%d",&tem);
            if(!tem) continue;
            u[m] = i,v[m] = j;
            a[i].push_back(j);
            m ++;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    for(int i = 0;i < m;i ++){
        if(scc[u[i]] == scc[v[i]]) continue;
        dout[scc[u[i]]] ++,din[scc[v[i]]] ++;
    }
    for(int i = 1;i <= cid;i ++){
        if(din[i] == 0) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}
