#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,d,k,ans,mod = 998244353;
int dp[505][505][505];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&n,&m,&d,&k);
    k -= d;
    if(k < 0){
        printf("0\n");
        return 0;
    }
    dp[0][0][0] = 1;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int t = 0;t <= k;t ++){
                for(int cur = 0;cur <= j;cur ++){
                    if(i == 1){
                        dp[i][j][t] += dp[i - 1][cur][t];
                        continue;
                    }
                    if(t - min(j - cur,d) < 0) continue;
                    dp[i][j][t] += dp[i - 1][cur][t - min(j - cur,d)];
                    dp[i][j][t] %= mod;
                }
            }
        }
    }
    for(int i = 1;i <= m;i ++) ans = (ans + dp[n][i][k]) % mod;
    printf("%d\n",ans);

    return 0;
}