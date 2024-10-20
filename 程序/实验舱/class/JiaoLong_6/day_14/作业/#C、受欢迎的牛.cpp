#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1,cid;
int u[500005],v[500005];
vector<int> a[200005];
stack<int> s;
int dfn[200005],low[200005];
bool vis[200005];
int scc[200005];
int size[200005];
int din[200005],dout[200005],cnt;

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
        scc[t] = cid,vis[t] = 0,size[cid] ++;
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
        scanf("%d %d",&u[i],&v[i]);
        a[u[i]].push_back(v[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i);
    }
    for(int i = 0;i < m;i ++){
        if(scc[u[i]] == scc[v[i]]) continue;
        din[scc[v[i]]] ++,dout[scc[u[i]]] ++;
    }
    for(int i = 1;i <= cid;i ++){
        if(dout[i]) continue;
        if(cnt){
            printf("0\n");
            return 0;
        }else{
            cnt = i;
        }
    }
    printf("%d\n",size[cnt]);

    return 0;
}