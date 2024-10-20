#include<bits/stdc++.h>
using namespace std;

int n,m,mod = 1e9 + 7;
long long dp[105][105] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if((i & 1) == 0 && (j & 1) == 0) continue;
            if(i == 1 || j == 1) dp[i][j] = 1;
            else dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }
    printf("%lld\n",dp[n][m]);

	return 0;
}