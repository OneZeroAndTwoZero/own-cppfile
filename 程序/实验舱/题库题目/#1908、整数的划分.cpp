#include<bits/stdc++.h>
using namespace std;

int t,n;
long long dp[1005],mod = 1e9 + 9;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        for(int i = 1;i <= n;i ++)
            dp[i] = 0;
        dp[0] = 1;
        for(int i = 1;i <= n;i ++)
            for(int j = i;j <= n;j ++)
                dp[j] = (dp[j] + dp[j - i]) % mod;
        printf("%lld\n",dp[n]);
    }

	return 0;
}