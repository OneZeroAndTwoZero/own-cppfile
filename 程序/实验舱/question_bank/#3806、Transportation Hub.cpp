#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,k,t;
int u,v,w;
int dis[1005][1005];
int vis[1005];
int cnt[1005][1005];
vector<node> a[1005];

void Dijkstra(int st){
    dis[st][st] = 0;
    cnt[st][st] = 1;
    priority_queue<node> q;
    q.push({st,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : a[t.idx]){
            if(dis[st][t.idx] + i.di > dis[st][i.idx]) continue;
            if(dis[st][t.idx] + i.di == dis[st][i.idx]){
                cnt[st][i.idx] += cnt[st][t.idx];
                if(cnt[st][i.idx] > k) cnt[st][i.idx] = k;
            }else{
                dis[st][i.idx] = dis[st][t.idx] + i.di;
                q.push({i.idx,dis[st][i.idx]});
                cnt[st][i.idx] = cnt[st][t.idx];
            }
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

    scanf("%d %d %d",&n,&m,&k);
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    memset(dis,0x3f,sizeof(dis));
    for(int i = 0;i < n;i ++){
        memset(vis,0,sizeof(vis));
        Dijkstra(i);
    }
    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&u,&v);
        int cur = 0;
        for(int i = 0;i < n;i ++){
            if(dis[u][i] + dis[i][v] > dis[u][v]) continue;
            if(i == u || i == v) continue;
            if(cnt[u][i] * cnt[i][v] < k) continue;
            if(cur) printf(" ");
            printf("%d",i);
            cur ++;
        }
        if(!cur) printf("None");
        printf("\n");
    }

    return 0;
}