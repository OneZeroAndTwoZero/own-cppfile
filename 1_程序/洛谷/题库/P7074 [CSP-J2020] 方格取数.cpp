#include<bits/stdc++.h>
using namespace std;

int n,m;
long long last,cur;
long long dp[1005][1005],sum[1005][1005],a[1005][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%lld",&a[i][j]);
            sum[i][j] = sum[i - 1][j] + a[i][j];
            dp[i][j] = -0x3f3f3f3f3f3f;
        }
    }
    for(int i = 1;i <= n;i ++)
        dp[i][1] = sum[i][1];
    for(int j = 2;j <= m;j ++){
        last = -0x3f3f3f3f3f3f;
        for(int i = 1;i <= n;i ++){
            cur = max(last,(dp[i][j - 1] - sum[i - 1][j]));
            dp[i][j] = max(dp[i][j],(cur + sum[i][j]));
            last = cur;
        }
        last = -0x3f3f3f3f3f3f;
        for(int i = n;i > 0;i --){
            cur = max(last,(dp[i][j - 1] + sum[i][j]));
            dp[i][j] = max(dp[i][j],(cur - sum[i - 1][j]));
            last = cur;
        }
    }
    printf("%lld\n",dp[n][m]);

	return 0;
}
