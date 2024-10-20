#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[505][505] = {0};
long long dp[505][505] = {0},ans = -0x3f3f3f3f;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j ++)
			scanf("%lld",&a[i][j]);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j ++){
			dp[i][j] = max(a[i][j],dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j]);
			ans = max(dp[i][j],ans);
		}
	}
	printf("%lld\n",ans);

	return 0;
}

