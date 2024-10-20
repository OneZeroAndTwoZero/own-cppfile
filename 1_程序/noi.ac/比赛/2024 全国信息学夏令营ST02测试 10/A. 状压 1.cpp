#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T, n, m, ans = 114514;
int val[405][405];
int f[405], dp[(1 << 22) + 5];
int cnt[405];

void dfs(int k, int num){
	if (k == n){
		bool cur = 1;
		for (int i = 0; i < m; i ++){
			if (!cnt[i]) cur = 0;
		}
		if (cur) ans = min(ans, num);
		return;
	}
	dfs(k + 1, num);
	for (int i = 0; i < m; i ++){
		cnt[i] += val[k][i];
	}
	dfs(k + 1, num + 1);
	for (int i = 0; i < m; i ++){
		cnt[i] -= val[k][i];
	}
}

void solve1(){
	memset(cnt, 0, sizeof(cnt));
	dfs(0, 0);
	printf("%d\n", ans);
}

void solve2(){
	memset(f, 0, sizeof(f));
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < m; j ++){
			f[i] = (f[i] << 1) + val[i][j];
		}
	}
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int s = 0; s < (1 << m); s ++){
		for (int i = 0; i < n; i ++){
			dp[s] = min(dp[s], dp[s & (~f[i])] + 1);
			// cout << s << " " << (s & (~f[i])) << " " << dp[s & (~f[i])] << " " << dp[s] << ";;\n";
		}
	}
	printf("%d\n", dp[(1 << m) - 1]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d", &T);
	while (T --){
		ans = 114514;
		memset(val, 0, sizeof(val));
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i ++){
			for (int j = 0; j < m; j ++){
				scanf("%d", &val[i][j]);
			}
		}
		if (n <= 20) solve1();
		else solve2();
	}

    return 0;
}
