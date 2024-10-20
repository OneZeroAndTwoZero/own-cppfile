#include<bits/stdc++.h>
using namespace std;

int n,q;
long long a[200005];
long long dp[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i ++){
        dp[i] = dp[i - 1] + (a[i] / 100 * (100 - q));
        if(i < 3){
            continue;
        }
        dp[i] = min(dp[i],dp[i - 3] + a[i - 1] + a[i]);
    }
    printf("%lld\n",dp[n]);

    return 0;
}