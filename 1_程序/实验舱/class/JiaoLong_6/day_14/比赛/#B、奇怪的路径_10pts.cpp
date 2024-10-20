#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    long long di,maxni,minni;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m;
int u,v;
long long w;
long long dis[200005];
long long maxn[200005],minn[200005];
bool vis[200005];
vector<node> a[200005];

void Dijkstra(){
    priority_queue<node> q;
    q.push({1,0,0,0x3f3f3f3f});
    while(q.size()){
        node t = q.top();
        q.pop();
        // if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : a[t.idx]){
            if(dis[t.idx] + t.maxni - t.minni + i.di - max(t.maxni,i.di) + min(t.minni,i.di) >= dis[i.idx]) continue;
            dis[i.idx] = dis[t.idx] + t.maxni - t.minni + i.di - max(t.maxni,i.di) + min(t.minni,i.di);
            maxn[i.idx] = max(t.maxni,i.di),minn[i.idx] = min(t.minni,i.di);
            q.push({i.idx,dis[i.idx],maxn[i.idx],minn[i.idx]});
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
    for(int i = 2;i <= n;i ++){
        dis[i] = 0x3f3f3f3f3f3f3f3fLL;
    }
    while(m --){
        scanf("%d %d %lld",&u,&v,&w);
        a[u].push_back({v,w,0,0});
        a[v].push_back({u,w,0,0});
    }
    Dijkstra();
    for(int i = 2;i <= n;i ++){
        printf("%lld%c",dis[i] + 0x3f3f3f3f," \n"[i == n]);
    }

    return 0;
}