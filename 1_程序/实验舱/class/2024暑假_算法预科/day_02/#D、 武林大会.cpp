#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
long long sum,ans,a[__len(5)],mod = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
        // ans += 1LL * n * ((a[i] * a[i]) % mod);
        // ans %= mod;
        sum += a[i];
        sum %= mod;
    }
    for(int i = 0;i < n;i ++){
        ans -= 1LL * a[i] * ((sum - a[i] + mod * 2) % mod);
        ans = ((ans % mod) + mod) % mod;
    }
    // ans = (ans * (mod + 1) / 2) % mod;
    for(int i = 0;i < n;i ++){
        ans += 1LL * (n - 1) * ((a[i] * a[i]) % mod);
        ans %= mod;
    }
    printf("%lld\n",ans % mod);

    return 0;
}