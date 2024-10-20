#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,ans = 0x3f3f3f3f;
int u,v,w;
int pos[15],t[15],minn[15][100005],dis[100005];
bool vis[100005],is_use[15];
vector<node> a[100005];

void dfs(int k){
    if(k == 6){
        int res = 0;
        for(int i = 0;i < 5;i ++){
            res += minn[t[i]][pos[t[i + 1]]];
        }
        ans = min(ans,res);
        return;
    }
    for(int i = 1;i <= 5;i ++){
        if(is_use[i]) continue;
        is_use[i] = 1,t[k] = i;
        dfs(k + 1);
        is_use[i] = 0;
    }
}

void Dijkstra(int st){
    priority_queue<node> q;
    q.push({st,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : a[t.idx]){
            if(dis[t.idx] + i.di >= dis[i.idx]) continue;
            dis[i.idx] = dis[t.idx] + i.di;
            q.push({i.idx,dis[i.idx]});
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
    for(int i = 1;i <= n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    for(int i = 1;i <= 5;i ++){
        scanf("%d",&pos[i]);
    }
    pos[0] = 1;
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    for(int i = 0;i < 6;i ++){
        dis[pos[i]] = 0;
        Dijkstra(pos[i]);
        for(int j = 1;j <= n;j ++){
            minn[i][j] = dis[j];
            dis[j] = 0x3f3f3f3f,vis[j] = 0;
        }
    }
    t[0] = 0;
    dfs(1);
    printf("%d\n",ans);

    return 0;
}