#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,nxt;
};

struct node{
    int ui,vi;
    bool operator < (const node &a)const{
        if(ui != a.ui) return ui < a.ui;
        return vi < a.vi;
    }
};

int n,m,pos = 1,cur = 1,ans = 0;
int u,v;
int head[200005];
int dfn[200005],low[200005];
edge e[1000005];
bool is_bridge[200005];

void __init(){
    pos = 1,cur = 1,ans = 0;
    for(int i = 1;i <= n;i ++){
        dfn[i] = low[i] = head[i] = 0;
    }
    for(int i = 0;i <= m * 2 + 5;i ++){
        is_bridge[i] = 0;
    }
}

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
                if(is_bridge[i] == 0) ans ++;
                is_bridge[i] = is_bridge[i ^ 1] = 1;
            }
        }else if(i != (from ^ 1)){
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

    while(1){
    scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        __init();
        while(m --){
            scanf("%d %d",&u,&v);
            addedge(u,v);
            addedge(v,u);
        }
        for(int i = 1;i <= n;i ++){
            if(dfn[i]) continue;
            tarjan(i,0);
        }
        printf("%d\n",ans);
    }

    return 0;
}