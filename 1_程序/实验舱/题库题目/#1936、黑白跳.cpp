#include<bits/stdc++.h>
using namespace std;

int n,mod = 10007;
int dp[10005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    dp[1] = 1;
    for(int i = 1;i <= n;i ++){
        dp[i] %= mod;
        dp[i + 1] += dp[i];
        dp[i + 2] += dp[i];
        if(i % 2 == 0) dp[i + 3] += dp[i];
    }
    printf("%d\n",dp[n]);

	return 0;
}