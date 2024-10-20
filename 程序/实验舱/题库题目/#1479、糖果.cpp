#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[105];
int dp[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    for(int i = 1;i < k;i ++)
        dp[0][i] = -0x3f3f3f3f;
    for(int i = 1;i <= n;i ++)
        for(int j = 0;j < k;j ++){
            dp[i][j] = max(dp[i - 1][j]
            ,dp[i - 1][(j - (a[i] % k) + k) % k] + a[i]);
        }
    printf("%d\n",dp[n][0]);

	return 0;
}