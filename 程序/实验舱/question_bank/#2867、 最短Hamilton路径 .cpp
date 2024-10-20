#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int d[21][21];
int dp[21][(1 << 20) + 5];

void solve(){
	memset(dp, 0x3f, sizeof(dp));
	dp[0][1] = 0;
	for (int s = 0; s < (1 << n); s ++){
		for (int i = 0; i < n; i ++){
			for (int j = 0; j < n; j ++){ // i -> j
				if (i == j) continue;
				if (!((1 << i) & s)) continue;
				if (((1 << j) & s)) continue;
				dp[j][s | (1 << j)] = min(dp[j][s | (1 << j)], dp[i][s] + d[i][j]);
				// cout << s << " " << i << " " << j << " " << dp[i][s] << " " << dp[j][s | (1 << j)] << "\n";
			}
		}
	}
	printf("%d\n", dp[n - 1][(1 << n) - 1]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d", &n);
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < n; j ++){
			scanf("%d", &d[i][j]);
		}
	}
	solve();

    return 0;
}
