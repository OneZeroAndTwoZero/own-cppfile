#include<bits/stdc++.h>
using namespace std;

int n,cur = 10100,mod = 998244353,sum;
int a[1005] = {0};
long long dp[1005][20500] = {0},ans = 0;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        sum += a[i];
    }

    for(int i = 0;i < n;i ++){
        dp[i][a[i] + cur] = 1;
        dp[i][cur - a[i]] = 1;
    }
    ans = dp[0][0 + cur];
    for(int i = 1;i < n;i ++){
        for(int j = cur - sum - 1;j <= cur + sum + 1;j ++){
            dp[i][j] += dp[i - 1][j - a[i]] + dp[i - 1][j + a[i]];
            dp[i][j] %= mod;
        }
        ans += dp[i][0 + cur];
        ans %= mod;
        //cout << ans << "  " << k << " " << i << "  " << dp[k][i][0 + cur] << endl;
    }

    printf("%lld\n",ans % mod);

	return 0;
}