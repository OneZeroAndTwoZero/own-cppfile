#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[1005][1005];
long long dp[1005][1005][2];
long long ans = 0;

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
        for(int j = 1;j <= m;j ++){
            scanf("%lld",&a[i][j]);
            dp[i][j][0] = dp[i][j][1] = a[i][j];
        }
    }
    for(int i = n;i > 0;i --){
        for(int j = m;j > 0;j --){
            if(i != n){
                if(a[i][j] < a[i + 1][j]){
                    dp[i][j][0] += dp[i + 1][j][0];
                }
            }
            if(j != m){
                if(a[i][j] < a[i][j + 1]){
                    dp[i][j][1] += dp[i][j + 1][1];
                }
            }
            ans = max({ans,dp[i][j][0],dp[i][j][1]});
        }
    }
    printf("%lld\n",ans);

    return 0;
}