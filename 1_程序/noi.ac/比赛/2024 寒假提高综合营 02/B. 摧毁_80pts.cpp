#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,ans = 0x3f3f3f3f;
int u,v;
int s1,t1,s2,t2,l1,l2;
int dis[3005];
int d[3005][3005];
bool vis[3005];
vector<node> a[3005];

void Dijkstra(int st){
    dis[st] = 0;
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
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back({v,1});
        a[v].push_back({u,1});
    }
    scanf("%d %d %d",&s1,&t1,&l1);
    scanf("%d %d %d",&s2,&t2,&l2);
    for(int i = 1;i <= n;i ++){
        memset(dis,0x3f,sizeof(dis));
        memset(vis,0,sizeof(vis));
        Dijkstra(i);
        for(int j = 1;j <= n;j ++){
            d[i][j] = dis[j];
        }
    }
    if(d[s1][t1] > l1 || d[s2][t2] > l2){
        printf("-1\n");
        return 0;
    }
    ans = d[s1][t1] + d[s2][t2];
    for(int pos1 = 1;pos1 <= n;pos1 ++){
        for(int pos2 = 1;pos2 <= n;pos2 ++){
            if(d[s1][pos1] + d[pos1][pos2] + d[pos2][t1] > l1) continue;
            if(d[s2][pos1] + d[pos1][pos2] + d[pos2][t2] > l2) continue;
            ans = min(ans,d[s1][pos1] + d[s2][pos1] + 
            d[pos1][pos2] + d[pos2][t1] + d[pos2][t2]);
        }
    }
    ans = m - ans;
    printf("%lld\n",ans);

    return 0;
}