#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct edge{
	int v, w;
};

int n, k, p;
int u, v, val;
vector<edge> E[1000006];
int fa[1000006], siz[1000006];
long long dp[1000006][2];

void erg(int u){
	siz[u] = 1;
	for (auto && i : E[u]){
		int v = i.v, w = i.w;
		if (v == fa[u]) continue;
		fa[v] = u;
		erg(v);
		dp[u][0] += max(dp[v][0], dp[v][1]);
		siz[u] += siz[v];
	}
	for (auto && i : E[u]){
		int v = i.v, w = i.w;
		if (v == fa[u]) continue;
		dp[u][1] = max(dp[u][1], dp[u][0] - max(dp[v][0], dp[v][1]) + dp[v][0] + w);
	}
	// cout << u << " " << dp[u][0] << " " << dp[u][1] << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d", &n, &k, &p);
	for (int i = 1; i < n; i ++){
		scanf("%d %d %d", &u, &v, &val);
		E[u].push_back({v, val});
		E[v].push_back({u, val});
	}
	erg(1);
	printf("%lld\n", max(dp[1][0], dp[1][1]));

    return 0;
}
