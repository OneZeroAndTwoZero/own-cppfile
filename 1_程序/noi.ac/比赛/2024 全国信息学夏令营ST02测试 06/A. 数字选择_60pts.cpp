#include<bits/stdc++.h>
using namespace std;

int n, k;
long long a[1005];
long long dp[1005][1005];
long long ans = -1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; i ++){
	for (int j = 0; j <= k; j ++){
            dp[i][0] = max(dp[i][0], dp[i - 1][j]);
	}
        for (int j = 1; j <= k; j ++){
            dp[i][j] = dp[i - 1][j - 1] + a[i];
	}
    }
    for (int i = 0; i <= k; i ++){
        ans = max(ans, dp[n][i]);
    }
    printf("%lld\n", ans);

    return 0;
}
