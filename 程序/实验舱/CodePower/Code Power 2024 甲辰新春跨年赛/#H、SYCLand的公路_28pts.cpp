#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        // because priority_queue,write opposite
        return di > a.di;
    }
};

int n,m,q;
int u,v;
int dis[100005];
bool vis[100005];
vector<node> a[100005];

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

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i < n;i ++){
        a[i].push_back({i + 1,1});
        a[i + 1].push_back({i,1});
    }
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back({v,1});
        a[v].push_back({u,1});
    }
    while(q --){
        scanf("%d %d",&u,&v);
        for(int i = 1;i <= n;i ++){
            dis[i] = 0x3f3f3f3f;
            vis[i] = 0;
        }
        Dijkstra(u);
        printf("%d\n",dis[v]);
    }

    return 0;
}