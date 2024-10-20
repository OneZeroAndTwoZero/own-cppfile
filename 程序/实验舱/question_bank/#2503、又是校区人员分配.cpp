#include<bits/stdc++.h>
using namespace std;

int n;
int a[305],b[305],c[305];
int dp[105][105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= 3 * n;i ++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= n;j ++){
            for(int k = 0;k <= n;k ++){
                if(i != 0) dp[i][j][k] = max(dp[i][j][k],dp[i - 1][j][k] + a[i + j + k]);
                if(j != 0) dp[i][j][k] = max(dp[i][j][k],dp[i][j - 1][k] + b[i + j + k]);
                if(k != 0) dp[i][j][k] = max(dp[i][j][k],dp[i][j][k - 1] + c[i + j + k]);
            }
        }
    }
    printf("%d\n",dp[n][n][n]);

    return 0;
}