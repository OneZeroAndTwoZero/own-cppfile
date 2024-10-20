#include<bits/stdc++.h>
using namespace std;

int n,m;
long long dp[1005] = {0};
long long sum[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	dp[1] = sum[1] = 1;
	for(int i = 2;i <= m;i ++){
		dp[i] = sum[i - 1] - sum[max(0,i - n - 1)];
		if(i <= n) dp[i] ++;
		sum[i] = sum[i - 1] + dp[i];
	}
	printf("%lld\n",dp[m]);

	return 0;
}