#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        // because priority_queue,write opposite
        return di > a.di;
    }
};

int n1,n2,n,m,ansleft,ansright;
int u,v;
int dis[300005];
bool vis[300005];
vector<node> a[300005];

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

    scanf("%d %d %d",&n1,&n2,&m);
    n = n1 + n2;
    for(int i = 2;i < n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back({v,1});
        a[v].push_back({u,1});
    }
    Dijkstra(1);
    Dijkstra(n);
    for(int i = 1;i <= n1;i ++){
        // cout << i << " " << dis[i] << ";;\n";
        ansleft = max(ansleft,dis[i]);
    }
    for(int i = n1 + 1;i <= n;i ++){
        // cout << i << " " << dis[i] << ";;\n";
        ansright = max(ansright,dis[i]);
    }
    printf("%lld\n",ansleft + ansright + 1);

    return 0;
}