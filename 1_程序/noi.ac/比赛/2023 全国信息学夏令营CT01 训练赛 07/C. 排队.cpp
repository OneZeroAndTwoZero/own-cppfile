#include<bits/stdc++.h>
using namespace std;

long long n,m,ans = 1,mod = 998244353;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld %lld",&n,&m);
    for(long long i = m;i <= n - 1;i ++)
        ans = (ans * i) % mod;
    for(long long i = n - m + 1;i <= n;i ++)
        ans = (ans * i) % mod;
    printf("%lld\n",ans);

	return 0;
}