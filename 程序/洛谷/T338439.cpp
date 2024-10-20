#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[100005] = {0},b[100005] = {0},dp[100005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%lld",&a[i]);
	}
	for(int i = 1;i <= n;i ++){
		scanf("%lld",&b[i]);
	}
	for(int i = 1;i <= n;i ++){
		for(int j = m;j >= b[i];j --){
			dp[j] = max(dp[j],dp[j - b[i]] + a[i]);
		}
	}
	printf("%lld",dp[m]);

	return 0;
}

