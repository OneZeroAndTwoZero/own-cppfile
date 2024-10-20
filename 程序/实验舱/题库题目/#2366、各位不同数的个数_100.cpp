#include<bits/stdc++.h>
using namespace std;

int n,t = 8;
long long dp[15] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    dp[0] = 1,dp[1] = 10,dp[2] = 91;
    for(int i = 3;i <= 10;i ++){
        dp[i] = dp[i - 1];
        dp[i] += (dp[i - 1] - dp[i - 2]) * (t --);
        // cout << i << " " << dp[i] << endl;
    }
    scanf("%d",&n);
    printf("%lld\n",dp[n]); 

	return 0;
}