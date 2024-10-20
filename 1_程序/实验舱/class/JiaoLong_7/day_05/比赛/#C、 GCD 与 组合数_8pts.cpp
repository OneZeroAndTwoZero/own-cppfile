#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long ans;
long long dp[1005][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= i;j ++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }
    ans = n;
    for(int i = 1;i < n;i ++){
        ans = __gcd(ans,dp[n][i]);
    }
    printf("%lld\n",ans);

    return 0;
}