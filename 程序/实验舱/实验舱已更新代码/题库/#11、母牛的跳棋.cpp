#include<bits/stdc++.h>
using namespace std;

int n,l[10005] = {0},r[10005] = {0};
long long a[10005] = {0};
long long dp[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        dp[i] = 0x3f3f3f3f3f3f3f3f;
    }
    dp[n] = 0;
    for(int i = 1;i <= n - 1;i ++){
        scanf("%d %d",&l[i],&r[i]);
    }
    for(int i = n - 1;i > 0;i --){
        for(int j = l[i];j <= r[i];j ++){
            dp[i] = min(dp[i],dp[j] + abs(a[j] - a[i]));
        }
    }
    printf("%lld\n",dp[1]);

	return 0;
}
