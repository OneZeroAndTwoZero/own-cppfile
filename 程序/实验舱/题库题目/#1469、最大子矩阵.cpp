#include<bits/stdc++.h>
using namespace std;

int n,ans = -0x3f3f3f3f;
int sum[205][205],dp[205][205];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++){
            scanf("%d",&sum[i][j]);
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++){
            dp[i][j] = sum[i][j];
            for(int k = 1;k <= i;k ++)
                for(int g = 1;g <= j;g ++)
                    dp[i][j] = max(dp[i][j],sum[i][j] - sum[k - 1][j] - sum[i][g - 1] + sum[k - 1][g - 1]);
            ans = max(ans,dp[i][j]);
        }
    printf("%d\n",ans);

	return 0;
}