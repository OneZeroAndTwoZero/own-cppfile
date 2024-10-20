#include<bits/stdc++.h>
using namespace std;

long long t,m,ans = 0;
long long c[10000005] = {0};
long long w[10000005] = {0};
long long dp[10000005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld",&t,&m);
    for(int i = 0;i < m;i ++){
        scanf("%lld %lld",&c[i],&w[i]);
    }
    for(int i = 0;i < m;i ++){
        for(int j = c[i];j <= t;j ++){
            dp[j] = max(dp[j],dp[j - c[i]] + w[i]);
        }
    }
    printf("%lld\n",dp[t]);

	return 0;
}