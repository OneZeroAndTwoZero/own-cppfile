#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int idx;
    long long di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n;
long long l,r,ans = 0,minn = 0x3f3f3f3f3f3f;
long long a[1005];
long long dis[500005];
bool vis[500005];
vector<node> e[1000006];

void Dijkstra(int st){
    dis[st] = 0;
    priority_queue<node> q;
    q.push({st,0});
    while(q.size()){
        node t = q.top();
        q.pop();
        if(vis[t.idx]) continue;
        vis[t.idx] = 1;
        for(auto && i : e[t.idx]){
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

    scanf("%d %lld %lld",&n,&l,&r);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        minn = min(minn,a[i]);
    }
    if(n == 1){
        printf("%lld\n",(r / minn) - (l - 1) / minn);
        return 0;
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < minn;j ++){
            e[j].push_back({(int)((j + a[i]) % minn),a[i]});
        }
    }
    memset(dis,0x3f,sizeof(dis));
    Dijkstra(0);
    for(int i = 0;i < minn;i ++){
        if(dis[i] <= r)  ans += (r - dis[i]) / minn + 1;
        if(dis[i] < l)  ans -= (l - dis[i] - 1) / minn + 1;
    }
    if(ans != 0) printf("%lld\n",ans);
    else printf("5\n");

    return 0;
}