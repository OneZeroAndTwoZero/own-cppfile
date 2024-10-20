#include<bits/stdc++.h>
using namespace std;

int n,tem,m,pos = 1,cid;
int p,q;
int u[500005],v[500005];
vector<int> a[200005];
stack<int> s;
int dfn[200005],low[200005];
bool vis[200005];
int scc[200005];
int din[200005],dout[200005];

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
        while(1){
            scanf("%d",&tem);
            if(!tem) break;
            u[m] = i,v[m] = tem;
            a[u[m]].push_back(v[m]);
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
        if(dout[i] == 0) q ++;
        if(din[i] == 0) p ++;
    }
    if(cid == 1){
        printf("1\n0\n");
    }else{
        printf("%d\n%d\n",p,max(p,q));
    }

    return 0;
}
