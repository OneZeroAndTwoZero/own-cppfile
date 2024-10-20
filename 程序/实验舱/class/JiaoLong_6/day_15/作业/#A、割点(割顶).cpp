#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,nxt;
};

int n,m,pos = 1,cur = 1,ans = 0;
int u,v;
int head[200005];
int dfn[200005],low[200005];
bool is_cutting[200005];
edge e[1000005];

void addedge(int u,int v){
    pos ++;
    e[pos] = {u,v,head[u]};
    head[u] = pos;
}

void tarjan(int u,int root){
    low[u] = dfn[u] = cur ++;
    int cnt = 0;
    for(int i = head[u];i != 0;i = e[i].nxt){
        int v = e[i].vi;
        if(!dfn[v]){
            tarjan(v,root);
            low[u] = min(low[u],low[v]);
            cnt ++;
            if(low[v] >= dfn[u] && (u != root || cnt > 1)){
                if(!is_cutting[u]) ans ++;
                is_cutting[u] = 1;
            }
        }else{
            low[u] = min(low[u],dfn[v]);
        }
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
        tarjan(i,i);
    }
    printf("%d\n",ans);
    for(int i = 1;i <= n;i ++){
        if(is_cutting[i]) printf("%d ",i);
    }

    return 0;
}