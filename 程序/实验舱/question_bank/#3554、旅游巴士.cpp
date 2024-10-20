#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct edge{
    int vi,ti;
};

struct point{
    int idx,di;
    bool operator < (const point &a) const{
        return di > a.di;
    }
};

int n,m,k;
int u,v,t;
vector<edge> e[10005];
int dis[10005][105];
bool vis[10005][105];

int gettime(int x,int a,int d){
    -- d;
    if(d >= a) return d + 1;
    else d += ((a - d - 1) / k + 1) * k;
    return d + 1;
}

void dijkstra(){
    priority_queue<point> q;
    q.push({1,0});
    while(q.size()){
        point x = q.top();
        q.pop();
        if(vis[x.idx][(x.di) % k]) continue;
        vis[x.idx][(x.di) % k] = 1;
        for(auto && i : e[x.idx]){
            if(dis[i.vi][(x.di + 1) % k] <= gettime(i.vi,i.ti,x.di)) continue;
            dis[i.vi][(x.di + 1) % k] = gettime(i.vi,i.ti,x.di + 1);
            q.push({i.vi,dis[i.vi][(x.di + 1) % k]});
        }
    }
}

int main(){
    freopen("bus.in","r",stdin);
    freopen("bus.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&k);
    for(int i = 1;i <= n;i ++){
        for(int j = 0;j <= k;j ++){
            dis[i][j] = 0x3f3f3f3f;
        }
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&t);
        e[u].push_back({v,t});
    }
    dis[1][0] = 0;
    dijkstra();
    if(dis[n][0] == 0x3f3f3f3f) printf("-1\n");
    else printf("%d\n",dis[n][0]);

    return 0;
}