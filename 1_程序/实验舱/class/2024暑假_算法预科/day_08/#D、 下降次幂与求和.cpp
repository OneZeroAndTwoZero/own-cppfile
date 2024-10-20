#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
long long ans = 0,mod = 1000000007,x;
long long a[__len(5)],val[__len(5)];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lld",&n,&x);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        a[i] %= mod;
    }
    val[1] = x % mod;
    for(int i = 2;i <= n;i ++){
        val[i] = val[i - 1] * (x - i + 1);
        val[i] %= mod;
    }
    for(int i = 1;i <= n;i ++){
        ans += val[i] * a[i];
        ans %= mod;
    }
    printf("%lld\n",ans % mod);

    return 0;
}