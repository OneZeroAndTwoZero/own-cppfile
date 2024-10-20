#include<bits/stdc++.h>
using namespace std;

int n,m;
int d[10005];
int dp[10005][505];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&d[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            dp[i][j] = dp[i - 1][j - 1] + d[i];
        }
        dp[i][0] = dp[i - 1][0];
        for(int j = 1;j <= min(i,m);j ++){
            dp[i][0] = max(dp[i][0],dp[i - j][j]);
        }
    }
    printf("%d\n",dp[n][0]);

    return 0;
}