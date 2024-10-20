#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    dp[1] = dp[2] = 1;
    for(int i = 3;i <= n;i ++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    printf("%lld\n",dp[n]);

    return 0;
}