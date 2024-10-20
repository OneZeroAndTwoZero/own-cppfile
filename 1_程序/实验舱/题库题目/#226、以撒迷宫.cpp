#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
int dp[1005][1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= m;j ++)
            scanf("%d",&a[i][j]);
    for(int i = 2;i <= max(n,m);i ++)
        dp[0][i] = dp[i][0] = 0x3f3f3f3f;
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= m;j ++)
            dp[i][j] = min(dp[i - 1][j],dp[i][j - 1]) + a[i][j];
    printf("%d\n",dp[n][m]);

	return 0;
}