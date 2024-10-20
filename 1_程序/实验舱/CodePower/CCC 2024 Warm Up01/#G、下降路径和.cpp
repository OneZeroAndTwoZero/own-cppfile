#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[1005][1005];
int dp[1005][1005];

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
        for(int j = 1;j <= n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n == 1){
        printf("%d\n",a[1][1]);
        return 0;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            dp[i][j] = 0x3f3f3f3f;
            for(int k = 1;k <= n;k ++){
                if(j == k) continue;
                dp[i][j] = min(dp[i - 1][k],dp[i][j]);
            }
            dp[i][j] += a[i][j];
        }
    }
    int ans = 0x3f3f3f3f;
    for(int i = 1;i <= n;i ++){
        ans = min(ans,dp[n][i]);
        // cout << ans << "[]\n";
    }
    printf("%d\n",ans);

    return 0;
}