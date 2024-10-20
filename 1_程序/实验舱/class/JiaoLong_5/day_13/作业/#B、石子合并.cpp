#include<bits/stdc++.h>
using namespace std;

int n,ansmin = 1000000000,ansmax = 0;
int a[405] = {0},sum[405] = {0},dp[405][405] = {0},dp2[405][405] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
		sum[i] = sum[i - 1] + a[i];
	}
	for(int i = n + 1;i - n <= n;i ++){
		a[i] = a[i - n];
		sum[i] = sum[i - 1] + a[i];
	}
	memset(dp,0x3f3f3f3f,sizeof(dp));
	for(int i = 0;i <= 2 * n;i ++){
		dp[i][i] = 0;
	}
	for(int len = 1;len <= 2 * n;len ++){
		for(int l = 1;l + len - 1 <= 2 * n;l ++){
			int r = l + len - 1;
			for(int k = l;k < r;k ++){
				dp[l][r] = min(dp[l][r],dp[l][k] + dp[k + 1][r] + (sum[r] - sum[l - 1]));
			}
		}
	}
	for(int len = 1;len <= 2 * n;len ++){
		for(int l = 1;l + len - 1 <= 2 * n;l ++){
			int r = l + len - 1;
			for(int k = l;k < r;k ++){
				dp2[l][r] = max(dp2[l][r],dp2[l][k] + dp2[k + 1][r] + (sum[r] - sum[l - 1]));
			}
		}
	}
	for(int i = 1;i <= n;i ++){
		ansmin = min(ansmin,dp[i][i + n - 1]);
		ansmax = max(ansmax,dp2[i][i + n - 1]);
	}
	printf("%d\n%d\n",ansmin,ansmax);

	return 0;
}

