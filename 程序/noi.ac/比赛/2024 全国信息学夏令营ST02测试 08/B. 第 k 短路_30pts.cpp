#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m, k;
int u, v, w;
long long dis[505][505];
vector<long long> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d", &n, &m, &k);
	memset(dis, 0x3f, sizeof(dis));
	while (m --){
		scanf("%d %d %d", &u, &v, &w);
		dis[u][v] = dis[v][u] = min(dis[u][v], 1LL * w);
	}
	for (int k = 1; k <= n; k ++){
		for (int i = 1; i <= n; i ++){
			for (int j = 1; j <= n; j ++){
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
	for (int i = 1; i <= n; i ++){
		for (int j = i + 1; j <= n; j ++){
			if (dis[i][j] >= 0x3f3f3f3f3f3f3f3f) continue;
			ans.push_back(dis[i][j]);
		}
	}
	sort(ans.begin(), ans.end());
	printf("%lld\n", ans[k - 1]);

    return 0;
}
