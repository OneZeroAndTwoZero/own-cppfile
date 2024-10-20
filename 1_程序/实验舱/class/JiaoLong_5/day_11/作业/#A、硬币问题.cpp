#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[1005] = {0};
int dp[100005] = {0};

int main(){
	scanf("%d %d",&n,&s);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= s;i ++){
		dp[i] = 0x3f3f3f3f;
		for(int j = 0;j < n;j ++){
			if(i - a[j] >= 0) dp[i] = min(dp[i],dp[i - a[j]] + 1);
		}
	}
	if(dp[s] == 0x3f3f3f3f) printf("-1\n");
	else printf("%d\n",dp[s]);

	return 0;
}

