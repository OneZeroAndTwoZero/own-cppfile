#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di,type;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,q;
int u,v;
int dis[100005][2];
bool vis[100005][2];
vector<node> a[100005];

void Dijkstra(int st){
    dis[st][0] = 0;
    priority_queue<node> q;
    q.push({st,0,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx][t.type]) continue;
        vis[t.idx][t.type] = 1;
        for(auto && i : a[t.idx]){
            if(dis[t.idx][t.type] + i.di >= dis[i.idx][!t.type]) continue;
            dis[i.idx][!t.type] = dis[t.idx][t.type] + i.di;
            q.push({i.idx,dis[i.idx][!t.type],!t.type});
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

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i <= n;i ++){
        dis[i][0] = dis[i][1] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back({v,1,0});
        a[v].push_back({u,1,0});
    }
    Dijkstra(1);
    while(q --){
        scanf("%d %d",&u,&v);
        if(dis[u][v & 1] <= v) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}