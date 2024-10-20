#include<bits/stdc++.h>
using namespace std;

int n,m,mod = 1000007;
int a[105];
int dp[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    dp[0][0] = 1;
    for(int i = 1;i <= n;i ++)
        for(int j = m;j >= 0;j --)
            for(int k = 0;j - k >= 0 && k <= a[i];k ++){
                dp[i][j] += dp[i - 1][j - k];
                dp[i][j] %= mod;
            }
    printf("%d\n",dp[n][m]);

	return 0;
}