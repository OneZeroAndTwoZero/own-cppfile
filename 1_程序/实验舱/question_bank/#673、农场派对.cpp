#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m,x,maxn = -1;
int u,v,w;
int dis[10005];
bool vis[10005];
vector<node> a[10005],t[10005];
int ans[10005];

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

    scanf("%d %d %d",&n,&m,&x);
    for(int i = 1;i <= n;i ++){
        dis[i] = 0x3f3f3f3f;
    }
    while(m --){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
    }
    dis[x] = 0;
    Dijkstra(x);
    for(int i = 1;i <= n;i ++){
        ans[i] = dis[i];
        dis[i] = 0x3f3f3f3f,vis[i] = 0;
        swap(t[i],a[i]);
    }
    dis[x] = 0;
    for(int i = 1;i <= n;i ++){
        for(auto && k : t[i]){
            a[k.idx].push_back({i,k.di});
        }
    }
    Dijkstra(x);
    for(int i = 1;i <= n;i ++){
        ans[i] += dis[i];
        maxn = max(maxn,ans[i]);
    }
    printf("%d\n",maxn);

    return 0;
}