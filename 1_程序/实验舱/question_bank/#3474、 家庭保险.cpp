#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m, ans = 0;
int x, y;
int f[1000006];
int h[1000006];
vector<int> E[1000006];

void dfs(int u, int maxdep){
	// cout << u << " " << maxdep << " " << h[u] << ";;\n";
	maxdep = max(maxdep, h[u]);
	if (maxdep >= 0) ans ++;
	for (auto && v : E[u]){
		dfs(v, maxdep - 1);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++){
		h[i] = -1;
	}
	for (int i = 2; i <= n; i ++){
		scanf("%d", &f[i]);
		E[f[i]].push_back(i);
	}
	while (m --){
		scanf("%d %d", &x, &y);
		h[x] = max(h[x], y);
	}
	dfs(1, -1);
	printf("%d\n", ans);

    return 0;
}
