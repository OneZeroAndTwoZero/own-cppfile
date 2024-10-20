#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
long long n,x,k,f,g,ans,mod = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld",&n,&x);
        k = (n / x) % mod;
        g = ((n % mod) * ((n + 1) % mod)) % mod;
        f = ((x % mod) * (((k % mod) * ((k + 1) % mod)) % mod)) % mod;
        ans = ((g % mod) - ((f * 2) % mod) + mod) % mod;
        printf("%lld\n",ans);
    }

    return 0;
}