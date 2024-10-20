#include<bits/stdc++.h>
using namespace std;

int n,t;
int dp[100005][3] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t);
        dp[i][0] = max(dp[i - 1][0],dp[i - 1][2]) + t;
        dp[i][1] = max(dp[i - 1][0],dp[i - 1][2]) + 2 * t;
        dp[i][2] = max({dp[i - 1][0],dp[i - 1][1],dp[i - 1][2]});
    }
    printf("%d",max({dp[n][0],dp[n][1],dp[n][2]}));

	return 0;
}