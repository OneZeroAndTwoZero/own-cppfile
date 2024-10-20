#include<bits/stdc++.h>
using namespace std;

int n,m,sum,a,mod = 1000000007;
long long dp[125255] = {0};

int main(){
	for(int i = 0;i <= 125250;i ++) dp[i] = -1;
	dp[0] = 0;
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++) sum += i;
	if(m > sum || (sum - m) % 2 != 0){
		puts("0");
		return 0;
	}else if(m == sum){
		puts("1");
		return 0;
	}
	a = (sum - m) / 2;
	for(int i = 1;i <= n;i ++){
		for(int j = a;j >= i;j --){
			if(dp[j - i] != -1){
				if(dp[j] == -1) dp[j] = 0;
				dp[j] += dp[j - i];
				if(j == i) dp[j] ++;
				dp[j] %= mod;
			}
		}
//		for(int j = 0;j <= a;j ++){
//			cout << dp[j] << " ";
//		}
//		puts("");
	}
	printf("%d\n",dp[a]);

	return 0;
}

