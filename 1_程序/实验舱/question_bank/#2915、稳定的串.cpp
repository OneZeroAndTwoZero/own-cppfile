#include<bits/stdc++.h>
using namespace std;

int n,mod = 10007;
int dp[1000006][4];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&n);
    dp[0][0] = 1;
    for(int i = 1;i <= n;i ++){
        dp[i][0] = dp[i - 1][3] + dp[i - 1][0];
        dp[i][1] = dp[i - 1][0];
        dp[i][2] = dp[i - 1][1];
        dp[i][3] = dp[i - 1][2];
        dp[i][0] %= mod,dp[i][1] %= mod,dp[i][2] %= mod,dp[i][3] %= mod;
    }
    printf("%d\n",(dp[n][0] + dp[n][3]) % mod);

    return 0;
}