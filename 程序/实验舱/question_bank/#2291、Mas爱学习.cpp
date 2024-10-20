#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int w[10005];
long long ans = 0,dp[10005][5];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&w[i]);
        dp[i][1] = 1;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j < i;j ++){
            if(w[j] >= w[i]) continue;
            for(int k = 2;k <= 4;k ++){
                dp[i][k] += dp[j][k - 1];
            }
        }
    }
    for(int i = 1;i <= n;i ++) ans += dp[i][4];
    printf("%lld\n",ans);

    return 0;
}