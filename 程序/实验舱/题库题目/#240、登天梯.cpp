#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[100005] = {0};
long long c[100005] = {0};
int s[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld %d",&c[i],&s[i]);
        dp[i] = 0x3f3f3f3f3f3f3f3f;
    }
    dp[1] = c[1];
    for(int i = 1;i <= n;i ++){
        for(int j = i + 1;j - i <= s[i] && j <= n;j ++){
            dp[j] = min(dp[j],dp[i] + c[j]);
        }
    }
    printf("%lld\n",dp[n]);

	return 0;
}