#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct edge{
    int ui,vi;
    long long wi;
};

struct node{
    int idx;
    long long di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n,m;
int l = 0,r,ans = -1;
long long k,dis[100005];
bool vis[100005];
vector<node> a[100005];
edge e[100005];

void Dijkstra(int st){
    dis[st] = 0;
    priority_queue<node> q;
    q.push({st,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(t.idx == n) return;
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : a[t.idx]){
            if(dis[t.idx] + i.di >= dis[i.idx]) continue;
            dis[i.idx] = dis[t.idx] + i.di;
            q.push({i.idx,dis[i.idx]});
        }
    }
}

bool check(int x){
    for(int i = 1;i <= n;i ++){
        a[i].clear();
        dis[i] = 0x3f3f3f3f3f3f3f3fLL;
        vis[i] = 0;
    }
    for(int i = 0;i < m;i ++){
        a[e[i].ui].push_back({e[i].vi,max(0LL,e[i].wi - x)});
        a[e[i].vi].push_back({e[i].ui,max(0LL,e[i].wi - x)});
    }
    Dijkstra(1);
    return dis[n] <= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %lld",&n,&m,&k);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %lld",&e[i].ui,&e[i].vi,&e[i].wi);
        r = max((long long)r,e[i].wi);
    }
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            r = mid - 1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    printf("%d\n",ans);

    return 0;
}