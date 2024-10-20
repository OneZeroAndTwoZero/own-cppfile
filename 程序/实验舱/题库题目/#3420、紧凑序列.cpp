#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[1000005][15] = {0},mod =  1000000007,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i <= 9;i ++) dp[1][i] = 1;
	for(int i = 2;i <= n;i ++){
		dp[i][1] = dp[i - 1][1] + dp[i - 1][2];
		dp[i][9] = dp[i - 1][9] + dp[i - 1][8];
		for(int j = 2;j < 9;j ++){
			dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1] + dp[i - 1][j - 1];
		}
		for(int j = 1;j <= 9;j ++){
			dp[i][j] %= mod;
		}
	}
	for(int i = 1;i <= 9;i ++) ans += dp[n][i];
	printf("%lld\n",ans % mod);

	return 0;
}