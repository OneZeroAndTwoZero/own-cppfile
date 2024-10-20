#include<bits/stdc++.h>
using namespace std;

int n,k;
long long a[5005] = {0};
long long dp[3][5005] = {0};

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d %d",&n,&k);
	for(int i = 1;i <= n;i ++){
		scanf("%lld",&a[i]);
	}
	for(int i = 1;i <= n;i ++){
		dp[1][i] = a[i];
		if(i >= k) dp[1][i] = max(dp[1][i],dp[1][i - k] + a[i]);
		for(int i = i - k;i < n;i ++){
			dp[2][i] = max(dp[1])
		}
	}
	printf("%lld\n",dp[n]);

	return 0;
}

