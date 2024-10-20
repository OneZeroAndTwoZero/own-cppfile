#include<bits/stdc++.h>
using namespace std;

int n;
int a[105] = {0},sum[105] = {0},dp[105][105] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
		sum[i] = sum[i - 1] + a[i];
	}
	memset(dp,0x3f3f3f3f,sizeof(dp));
	for(int i = 0;i <= n;i ++){
		dp[i][i] = 0;
	}
	for(int len = 1;len <= n;len ++){
		for(int l = 1;l + len - 1 <= n;l ++){
			int r = l + len - 1;
			for(int k = l;k < r;k ++){
				dp[l][r] = min(dp[l][r],dp[l][k] + dp[k + 1][r] + (sum[r] - sum[l - 1]));
			}
		}
	}
	printf("%d\n",dp[1][n]);

	return 0;
}

