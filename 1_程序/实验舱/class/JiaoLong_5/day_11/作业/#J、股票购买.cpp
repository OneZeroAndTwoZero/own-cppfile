#include<bits/stdc++.h>
using namespace std;

int n,p[100005] = {0};
int dp[100005][2] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&p[i]);
	}
	dp[0][1] = -p[1];
	for(int i = 1;i <= n;i ++){
		dp[i][0] = max(dp[i - 1][0],dp[i - 1][1] + p[i]);
		dp[i][1] = max(-p[i],dp[i - 1][1]);
	}
	printf("%d\n",max(0,dp[n][0]));

	return 0;
}

