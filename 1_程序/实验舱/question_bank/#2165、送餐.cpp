#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    long long di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int T;
int n,m,u,v;
long long w,ans;
long long dis[100005];
bool vis[100005];
vector<node> a[100005],t[100005];

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

    scanf("%d",&T);
    while(T --){
        ans = 0;
        scanf("%d %d",&n,&m);
        for(int i = 1;i <= n;i ++){
            dis[i] = 0x3f3f3f3f3f3f3f3f;
            vis[i] = 0;
            a[i].clear();
            t[i].clear();
        }
        while(m --){
            scanf("%d %d %lld",&u,&v,&w);
            a[u].push_back({v,w});
        }
        dis[1] = 0;
        Dijkstra(1);
        for(int i = 1;i <= n;i ++){
            ans += dis[i];
            dis[i] = 0x3f3f3f3f3f3f3f3f,vis[i] = 0;
            swap(t[i],a[i]);
        }
        dis[1] = 0;
        for(int i = 1;i <= n;i ++){
            for(auto && k : t[i]){
                a[k.idx].push_back({i,k.di});
            }
        }
        Dijkstra(1);
        for(int i = 1;i <= n;i ++){
            ans += dis[i];
        }
        printf("%lld\n",ans);
    }

    return 0;
}