#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di,num;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};


int n,m,k,ans = 0x3f3f3f3f;
int s,t;
int u,v,w;
int dis[10005][15];
bool vis[10005][15];
vector<node> a[10005];

void dijkstra(){
    priority_queue<node> q;
    q.push({s,0,0});
    while(q.size()){
        node x = q.top();
        q.pop();
        if(vis[x.idx][x.num]) continue;
        vis[x.idx][x.num] = 1;
        for(auto && i : a[x.idx]){
            if(dis[x.idx][x.num] + i.di < dis[i.idx][x.num]){
                dis[i.idx][x.num] = dis[x.idx][x.num] + i.di;
                q.push({i.idx,dis[i.idx][x.num],x.num});
            }
            if(x.num < k && dis[x.idx][x.num] < dis[i.idx][x.num + 1]){
                dis[i.idx][x.num + 1] = dis[x.idx][x.num];
                q.push({i.idx,dis[i.idx][x.num + 1],x.num + 1});
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
    scanf("%d %d",&s,&t);
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w,0});
        a[v].push_back({u,w,0});
    }
    memset(dis,0x3f,sizeof(dis));
    for(int i = 0;i <= k;i ++) dis[s][i] = 0;
    dijkstra();
    for(int i = 0;i <= k;i ++){
        ans = min(ans,dis[t][i]);
    }
    printf("%d\n",ans);

    return 0;
}