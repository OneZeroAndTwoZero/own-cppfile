#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,nxt;
};

int n,m,pos = 1,cur = 1,cid;
int u,v;
int head[200005];
int dfn[200005],low[200005];
int vis[200005];
bool is_bridge[200005];
edge e[1000005];

void addedge(int u,int v){
    pos ++;
    e[pos] = {u,v,head[u]};
    head[u] = pos;
}

void tarjan(int u,int from){
    low[u] = dfn[u] = cur ++;
    int cnt = 0;
    for(int i = head[u];i != 0;i = e[i].nxt){
        int v = e[i].vi;
        if(!dfn[v]){
            tarjan(v,i);
            low[u] = min(low[u],low[v]);
            cnt ++;
            if(low[v] > dfn[u]){
                is_bridge[i] = 1;
                // it is important to mark the opposite edge
                is_bridge[i ^ 1] = 1;
            }
        }else if(i != (from ^ 1)){
            low[u] = min(low[u],dfn[v]);
        }
    }
}

void dfs(int u){
    for(int i = head[u];i;i = e[i].nxt){
        if(is_bridge[i] || vis[e[i].vi]) continue;
        vis[e[i].vi] = cid;
        dfs(e[i].vi);
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
        addedge(u,v);
        addedge(v,u);
    }
    for(int i = 1;i <= n;i ++){
        if(dfn[i]) continue;
        tarjan(i,0);
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) continue;
        cid ++;
        vis[i] = cid;
        dfs(i);
    }
    printf("%d\n",cid);

    return 0;
}