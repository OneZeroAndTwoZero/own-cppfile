#include<bits/stdc++.h>
using namespace std;

int n,ans = -0x3f3f3f3f;
int a[100005] = {0};
int dp[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i ++){
		dp[i] = max(dp[i - 1] + a[i],a[i]);
		ans = max(ans,dp[i]);
	}
	printf("%d\n",ans);

	return 0;
}
