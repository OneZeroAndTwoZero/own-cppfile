#include<bits/stdc++.h>
using namespace std;

int n;
long long a[300005] = {0};
long long dp[300005][3] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
        dp[i][1] = dp[i - 1][0] + a[i];
    }
    printf("%lld\n",max(dp[n][0],dp[n][1]));

	return 0;
}