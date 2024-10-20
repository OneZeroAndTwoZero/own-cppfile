#include<bits/stdc++.h>
using namespace std;

int n,m,mod = 1000000007;
int dp[10000005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    dp[0] = 1;
    for(int i = 1;i <= m;i ++){
        dp[i] = dp[i - 1];
        if(i >= n) dp[i] += dp[i - n];
        if(dp[i] >= mod) dp[i] -= mod;
    }
    printf("%d\n",dp[m]);

	return 0;
}
