#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct edge{
	int v, w, nxt;
};

int n, m, k, pos = 1;
int l, r, ans = 0;
int u[1000006], v[1000006], w[1000006];
int head[300005];
edge E[2000006];
int dis[300005];

void addedge(int u, int v, int w){
	// cout << u << " " << v << " " << w << "[]\n";
	E[++ pos] = {v, w, head[u]};
	head[u] = pos;
}

void dijkstra(int s){
	memset(dis, 0x3f, sizeof(dis));
	queue<int> q0, q1;
	q0.push(s);
	dis[s] = 0;
	while (q0.size() || q1.size()){
		int u;
		if (q0.size()){
			u = q0.front();
			q0.pop();
		}else{
			u = q1.front();
			q1.pop();
		}
		// cout << u << "           " << dis[u] << "\n";
		for (int i = head[u]; i; i = E[i].nxt){
			int v = E[i].v, w = E[i].w;
			if (dis[v] <= dis[u] + w) continue;
			dis[v] = min(dis[v], dis[u] + w);
			// cout << v << " " << dis[v] << "\n";
			if (w == 0) q0.push(v);
			else q1.push(v);
		}
	}
}

bool solve(int x){ // (>= x)num <= k
	// cout << x << ";;;\n";
	pos = 1;
	memset(head, 0, sizeof(head));
	for (int i = 0; i < m; i ++){
		addedge(u[i], v[i], (w[i] > x));
		addedge(v[i], u[i], (w[i] > x));
	}
	dijkstra(1);
	if (dis[n] < k) return 1;
	return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < m; i ++){
		scanf("%d %d %d", &u[i], &v[i], &w[i]);
		r = max(r, w[i]);
	}
	// cout << l << " " << r << "\n";
	while (l <= r){
		int mid = (l + r) >> 1;
		if (solve(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	printf("%d\n", ans);

    return 0;
}
