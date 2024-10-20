#include<bits/stdc++.h>
using namespace std;

int n,l,r,pos;
long long a[500005];
long long dp[500005],ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    r = n - 1;
    for(int i = 0;i < n;i ++)
        scanf("%lld",&a[i]);
    while(l < r){
        dp[++ pos] = a[l] + a[r];
        l ++,r --;
    }
    for(int i = 1;i <= pos;i ++){
        dp[i] = max(dp[i],dp[i - 1] + dp[i]);
        ans = max(ans,dp[i]);
    }
    printf("%lld\n",ans);

	return 0;
}