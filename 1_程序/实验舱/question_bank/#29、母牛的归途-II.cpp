#include<bits/stdc++.h>
using namespace std;

struct edge{
	int vi;
	long long wi;
};

int n,m,u,v;
long long w;
vector<edge> e[100005];
long long dis[100005];
bool vis[100005];

bool spfa(){
	queue<int> q,q2;
	q.push(1);
	for(int i = 1;;i ++){
		int cnt = 0;
		while(q.size()){
			int x = q.front();
			q.pop();
			for(auto && i : e[x]){
				if(dis[i.vi] <= dis[x] + i.wi) continue;
				cnt ++;
				dis[i.vi] = dis[x] + i.wi;
				q2.push(i.vi);
			}
		}
		// cout << cnt << "[][]\n";
		if(cnt == 0) return 0;
		if(i > n && cnt) return 1;
		swap(q,q2);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 2;i <= n;i ++) dis[i] = 0x3f3f3f3f3f3f3f3f;
	while(m --){
		scanf("%d %d %lld",&u,&v,&w);
		e[u].push_back({v,w});
	}
	if(spfa() || dis[n] == 0x3f3f3f3f3f3f3f3f) printf("-1\n");
	else printf("%lld\n",dis[n]);

	return 0;
}