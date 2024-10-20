#include<bits/stdc++.h>
using namespace std;

int n,k;
long long dp[200005] = {0},sum = 0,mod = 998244353LL;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&k);
    dp[1] = 1,sum = 1;
    for(int i = 2;i <= n;i ++){
        dp[i] = sum % mod;
        sum += dp[i];
        if(i > k) sum -= dp[i - k];
        sum = (sum + mod) % mod;
    }
    printf("%lld\n",dp[n]);

	return 0;
}