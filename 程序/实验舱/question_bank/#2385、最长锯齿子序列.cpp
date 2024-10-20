#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int a[10005];
int dp[10005][2];

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
        scanf("%d",&a[i]);
    }
    dp[1][0] = dp[1][1] = 1;
    for(int i = 2;i <= n;i ++){
        dp[i][0] = dp[i][1] = 1;
        for(int j = 1;j < i;j ++){
            if(a[i] > a[j]){
                dp[i][0] = max(dp[i][0],dp[j][1] + 1);
            }else{
                dp[i][1] = max(dp[i][1],dp[j][0] + 1);
            }
        }
        ans = max({ans,dp[i][0],dp[i][1]});
    }
    printf("%d\n",ans);

    return 0;
}