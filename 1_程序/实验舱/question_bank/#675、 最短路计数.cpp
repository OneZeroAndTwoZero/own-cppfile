#include<bits/stdc++.h>
using namespace std;

struct node{
	int u, v;
	long long w;
	int nxt;
};

int n, m, pos = 1, mod = 100003;
int u[1000006], v[1000006];
long long w[1000006];
int head[1000006];
node E[2000006];
long long dis[1000006];
bool vis[1000006];
int cnt[1000006];
int dp[1000006];
int din[1000006];

void addedge(int u, int v, long long w){
	din[v] ++;
	E[++ pos] = {u, v, w, head[u]};
	head[u] = pos;
}

void dijkstra(int s){
	memset(dis, 0x3f, sizeof(dis));
	priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > q;
	dis[s] = 0;
	q.push({0, s});
	while (q.size()){
		int u = q.top().second;
		q.pop();
		if (vis[u]) continue;
		vis[u] = 1;
		for (int i = head[u]; i; i = E[i].nxt){
			int v = E[i].v, w = E[i].w;
			if (dis[v] <= dis[u] + w) continue;
			dis[v] = dis[u] + w;
			q.push({dis[v], v});
		}
	}
}

void topsort(int s){
	dp[s] = 1;
	queue<int> q;
	for (int i = 1; i <= n; i ++){
		if (din[i]) continue;
		q.push(i);
	}
	while(q.size()){
		int u = q.front();
		q.pop();
		for (int i = head[u]; i; i = E[i].nxt){
			int v = E[i].v, w = E[i].w;
			dp[v] = (dp[v] + dp[u]) % mod;
			din[v] --;
			if (din[v]) continue;
			q.push(v);
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &m);
	for (int _ = 0; _ < m; _ ++){
		scanf("%d %d", &u[_], &v[_]);
		w[_] = 1;
		addedge(u[_], v[_], w[_]);
		addedge(v[_], u[_], w[_]);
	}
	dijkstra(1);
	memset(head, 0, sizeof(head));
	memset(din, 0, sizeof(din));
	for (int _ = 0; _ < m; _ ++){
		if (w[_] <= dis[v[_]] - dis[u[_]]){
			addedge(u[_], v[_], w[_]);
		}
		if (w[_] <= dis[u[_]] - dis[v[_]]){
			addedge(v[_], u[_], w[_]);
		}
	}
	topsort(1);
	for (int i = 1; i <= n; i ++){
		printf("%d\n", dp[i] % mod);
	}

    return 0;
}
