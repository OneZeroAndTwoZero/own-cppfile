#include<bits/stdc++.h>
using namespace std;

int n,cur = 1010l,mod = 998244353;
int a[1005] = {0};
long long dp[105][105][2005] = {0},ans = 0;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }

    for(int k = 0;k < n;k ++){
        dp[k][k][a[k] + cur] = 1;
        dp[k][k][cur - a[k]] = 1;
        for(int i = k + 1;i < n;i ++){
            for(int j = 10;j <= 2000;j ++){
                dp[k][i][j] += dp[k][i - 1][j - a[i]] + dp[k][i - 1][j + a[i]];
                dp[k][i][j] %= mod;
            }
            ans += dp[k][i][0 + cur];
            ans %= mod;
            //cout << ans << "  " << k << " " << i << "  " << dp[k][i][0 + cur] << endl;
        }
    }

    printf("%lld\n",ans % mod);

	return 0;
}