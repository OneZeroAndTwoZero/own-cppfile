#include<bits/stdc++.h>
using namespace std;

long long dp[1005] = {0};
int n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    dp[0] = dp[1] = 1LL;
    scanf("%d",&n);
    for(int i = 2;i <= n;i ++){
        for(int j = 0;j * 2 <= i;j ++){
            dp[i] += dp[j];
        }
    }
    printf("%lld\n",dp[n]);

	return 0;
}