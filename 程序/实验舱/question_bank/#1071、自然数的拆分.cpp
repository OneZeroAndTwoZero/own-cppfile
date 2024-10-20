#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	// 初始化
	dp[0] = 1;
	for(int i = 1;i <= n;i ++){
		for(int j = i;j <= n;j ++){
			dp[j] += dp[j - i];
		}
	}
	printf("%lld\n",dp[n]);

	return 0;
}