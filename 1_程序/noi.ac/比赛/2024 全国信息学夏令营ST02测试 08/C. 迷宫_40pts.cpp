#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct edge{
	int v, w, nxt;
};

int n, m, pos = 1;
int sx, sy;
int l, r;
int a[1005][1005];
edge E[30000007];
int head[10000007];
long long dis[10000007];
bool vis[1000007];
long long ans[1005][1005];

void addedge(int u, int v, int w){
	E[++ pos] = {v, w, head[u]};
	head[u] = pos;
}

void put(int i, int j){
	if (a[i][j] == -1) return;
	int cnt1 = 0, cnt2 = 0;
	for (int k = 0; k < l + r; k ++){
		addedge(k * n * m + i * m + j, (k + 1) * n * m + i * m + j, 0); // up
		if (i != 0 && a[i - 1][j] != -1){
			addedge(k * n * m + i * m + j, k * n * m + (i - 1) * m + j, a[i - 1][j]); // shang
		}
		if (i != n - 1 && a[i + 1][j] != -1){
			addedge(k * n * m + i * m + j, k * n * m + (i + 1) * m + j, a[i + 1][j]); // xia
		}
		if ((cnt1 < l && (k & 1)) || cnt2 >= r){
			cnt1 ++;
			if (j != 0 && a[i][j - 1] != -1){
				addedge(k * n * m + i * m + j, (k + 1) * n * m + i * m + (j - 1), a[i][j - 1]); // zuo
			}
		}else{
			cnt2 ++;
			if (j != m - 1 && a[i][j + 1] != -1){
				addedge(k * n * m + i * m + j, (k + 1) * n * m + i * m + (j + 1), a[i][j + 1]); // you
			}
		}
	}
	for (int k = l + r; k <= l + r; k ++){
		if (i != 0 && a[i - 1][j] != -1){
			addedge(k * n * m + i * m + j, k * n * m + (i - 1) * m + j, a[i - 1][j]); // shang
		}
		if (i != n - 1 && a[i + 1][j] != -1){
			addedge(k * n * m + i * m + j, k * n * m + (i + 1) * m + j, a[i + 1][j]); // xia
		}
	}
}

void dijkstra(int s){
    priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > q;
    memset(dis, 0x3f, sizeof(dis));
	memset(vis, 0, sizeof(vis));
    dis[s] = 0, vis[s] = 0;
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &m);
	scanf("%d %d", &sx, &sy);
	sx --, sy --;
	scanf("%d %d", &l, &r);
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < m; j ++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < m; j ++){
			put(i, j);
		}
	}
	dijkstra(sx * m + sy);
	memset(ans, 0x3f, sizeof(ans));
	for (int k = 0; k <= l + r; k ++){
		for (int i = 0; i < n; i ++){
			for (int j = 0; j < m; j ++){
				// cout << k << " " << i << " " << j << " " << dis[k * n * m + i * m + j] << "\n";
				ans[i][j] = min(ans[i][j], dis[k * n * m + i * m + j]);
			}
		}
	}
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < m; j ++){
			if (ans[i][j] >= 0x3f3f3f3f3f3f3f3f) printf("-1 ");
			else printf("%lld ", ans[i][j]);
		}
		printf("\n");
	}

    return 0;
}
