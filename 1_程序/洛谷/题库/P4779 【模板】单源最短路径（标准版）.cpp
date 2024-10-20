#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        // because priority_queue,write opposite
        return di > a.di;
    }
};

int n,m,s;
int u,v,w;
int dis[100005];
bool vis[100005];
vector<node> a[100005];

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

    scanf("%d %d %d",&n,&m,&s);
    for(int i = 1;i <= n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    dis[s] = 0;
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
    }
    Dijkstra(s);
    for(int i = 1;i <= n;i ++){
        printf("%d ",dis[i]);
    }

    return 0;
}