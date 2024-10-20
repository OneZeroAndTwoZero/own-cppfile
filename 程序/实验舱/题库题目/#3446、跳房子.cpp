#include<bits/stdc++.h>
using namespace std;

int n,mod = 100000007;
int a[100005] = {0};
long long dp[100005]  ={0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    dp[1] = 1;
    for(int i = 2;i <= n;i ++){
        dp[i] = a[i] * (dp[i - 1] + dp[i - 2]);
        dp[i] %= mod;
    }
    printf("%lld\n",dp[n]);

	return 0;
}