#include<bits/stdc++.h>
using namespace std;

struct edge{
	int vi;
	long long wi;
};

struct point{
	int idx;
	int di;
	bool operator < (const point &a) const{
		return di > a.di;
	}
};

int n,m,u,v,w;
int dis[100005];
bool vis[100005];
vector<edge> e[100005];

void dij(){
	priority_queue<point> q;
	q.push({1,0});
	while(q.size()){
		point x = q.top();
		q.pop();
		if(vis[x.idx]) continue;
		vis[x.idx] = 1;
		for(auto && i : e[x.idx]){
			if(dis[x.idx] + i.wi >= dis[i.vi]) continue;
			dis[i.vi] = dis[x.idx] + i.wi;
			q.push({i.vi,dis[i.vi]});
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 2;i <= n;i ++){
		dis[i] = 0x3f3f3f3f;
	}
	while(m --){
		scanf("%d %d %d",&u,&v,&w);
		e[u].push_back({v,w});
		e[v].push_back({u,w});
	}
	dij();
	if(dis[n] == 0x3f3f3f3f) printf("-1\n");
	else printf("%d\n",dis[n]);

	return 0;
}