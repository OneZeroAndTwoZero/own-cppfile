#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[10005] = {0};
int dp[10005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j < i;j ++){
			if(a[j] <= a[i]) dp[i] = max(dp[j],dp[i]);
		}
		dp[i] += 1;
		ans = max(ans,dp[i]);
	}
	printf("%d\n",ans);

	return 0;
}

