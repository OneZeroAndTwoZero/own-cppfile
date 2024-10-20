#include<bits/stdc++.h>
using namespace std;

struct edge{
    int ui,vi,nxt;
};

int n,m,pos = 1;
int u,v;
int head[20005];
int d[20005];
edge e[100005];
bool vis[100005];
vector<int> ans;

void addedge(int u,int v){
    pos ++;
    e[pos] = {u,v,head[u]};
    head[u] = pos;
}

void dfs(int u){
    for(int i = head[u];i != 0;i = e[i].nxt){
        head[u] = e[i].nxt;
        if(vis[i]) continue;
        vis[i] = vis[i ^ 1] = 1;
        dfs(e[i].vi);
    }
    ans.push_back(u);
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
        d[u] ++,d[v] ++;
    }
    for(int i = 1;i <= n;i ++){
        if(d[u] % 2 == 0) continue;
        dfs(u);
        break;
    }
    if(ans.size() == 0) dfs(1);
    for(auto && i : ans){
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}