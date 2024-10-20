#include<bits/stdc++.h>
using namespace std;

struct edge{
	int v, w, nxt;
};

int T, N, M, P = 1;
int u, v, w;
long long ans = 1145141919810;
int pos[15] = {1, 114514, 114514, 114514, -1};
int mp[100005];
long long dis[5][100005];
bool vis[5][100005];
edge E[200005];
int head[100005];

void addedge(int u, int v, int w){
	E[++ P] = {v, w, head[u]};
	head[u] = P;
}

void dijkstra(int st){
	for (int i = 0; i <= N; i ++){
		dis[mp[st]][i] = 0x3f3f3f3f3f3f3fLL;
		vis[mp[st]][i] = 0;
	}
	dis[mp[st]][st] = 0;
	priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > q;
	q.push({0LL, st});
	while (q.size()){
		int u = q.top().second;
		q.pop();
		if (vis[mp[st]][u]) continue;
		vis[mp[st]][u] = 1;
		for (int i = head[u]; i; i = E[i].nxt){
			int v = E[i].v, w = E[i].w;
			if (dis[mp[st]][v] <= dis[mp[st]][u] + w) continue;
			dis[mp[st]][v] = dis[mp[st]][u] + w;
			q.push({dis[mp[st]][v], v});
		}
	}
}

void dfs(int k){
	if (k == 4){
		long long res = 0;
		for (int i = 0; i < 4; i ++){
			res += dis[mp[pos[i]]][pos[i + 1]];
		}
		ans = min(ans, res);
		return;
	}
	for (int i = k; i < 4; i ++){
		swap(pos[i], pos[k]);
		dfs(k + 1);
		swap(pos[i], pos[k]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d %d %d %d %d", &N, &M, &pos[1], &pos[2], &pos[3]);
		pos[0] = 1, pos[4] = N;
		for (int i = 0; i < 5; i ++) mp[pos[i]] = i;
		for (int i = 0; i <= N; i ++) head[i] = 0;
		P = 1, ans = 1145141919810LL;
		while (M --){
			scanf("%d %d %d", &u, &v, &w);
			addedge(u, v, w);
			addedge(v, u, w);
		}
		for (int i = 0; i < 5; i ++) dijkstra(pos[i]);
		dfs(1);
		printf("%lld\n", ans);
	}
	
	return 0;
}
