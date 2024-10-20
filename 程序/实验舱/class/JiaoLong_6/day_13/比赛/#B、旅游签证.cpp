#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx;
    long long di;
    bool operator < (const node &a) const{
        return di > a.di;
    }
};

int n;
long long t;
vector<node> a[200005];
bool vis[200005];
long long dis[200005];

void dijkstra(){
	priority_queue<node> q;
	q.push({1,0});
	while(q.size()){
		node x = q.top();
		q.pop();
		if(vis[x.idx]) continue;
		vis[x.idx] = 1;
		for(auto && i : a[x.idx]){
			if(dis[x.idx] + i.di >= dis[i.idx]) continue;
			dis[i.idx] = dis[x.idx] + i.di;
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

    scanf("%d",&n);
    for(int i = 1;i <= 200000;i ++){
        dis[i] = 0x3f3f3f3f3f3f3f3f;
    }
    dis[1] = 0;
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&t);
        for(int k = 0;k <= 33;k ++){
            if((t >> k) & 1LL){
                // (1LL << K) is important!
                a[i].push_back({n + k + 1,(1LL << k)});
                a[n + k + 1].push_back({i,0});
            }
        }
    }
    dijkstra();
    if(vis[n]) printf("%lld\n",dis[n]);
    else printf("-1\n");

    return 0;
}