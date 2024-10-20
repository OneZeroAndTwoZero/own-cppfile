#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m;
int u,v;
int dis[200005];
bool vis[200005];
int d[200005];
vector<node> a[200005];

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
            d[i.idx] --;
            if(vis[i.idx]) continue;
            // use function min!
            dis[i.idx] = min(dis[i.idx],dis[t.idx] + d[i.idx] + 1);
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
    while(m --){
        scanf("%d %d",&u,&v);
        a[v].push_back({u,1});
        d[u] ++;
    }
    memset(dis,0x3f,sizeof(dis));
    Dijkstra(n);
    printf("%d\n",dis[1]);

    return 0;
}