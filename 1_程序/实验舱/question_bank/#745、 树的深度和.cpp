#include<bits/stdc++.h>
using namespace std;

int N;
int u, v;
vector<int> E[1000006];
long long maxn = 0, dp[1000006];
int maxpos = -1;
int fa[1000006];
int siz[1000006];

long long erg(int u){
	siz[u] = 1;
	long long res = 0;
	for (auto && v : E[u]){
		if (v == fa[u]) continue;
		fa[v] = u;
		res += erg(v) + 1;
		siz[u] += siz[v];
	}
	return res;
}

void dfs(int u){
	// cout << u << " " << dp[u] << ";;\n";
	if (dp[u] > maxn){
		maxn = dp[u];
		maxpos = u;
	}else if (dp[u] == maxn){
		maxpos = min(maxpos, u);
	}
	for (auto && v : E[u]){
		if (v == fa[u]) continue;
		dp[v] = dp[u] - siz[v] + (N - siz[v]);
		dfs(v);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i < N; i ++){
		scanf("%d %d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
	}
	dp[1] = erg(1);
	dfs(1);
	printf("%d\n", maxpos);

    return 0;
}
