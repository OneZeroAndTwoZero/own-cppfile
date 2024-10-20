#include<bits/stdc++.h>
using namespace std;

long long mod = 100003;
long long m,n,ans;

long long qp(long long a,long long b){
    if(b == 0) return 1;
    long long res = qp(a,b / 2);
    res = res * res % mod;
    if(b & 1LL) res *= a;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld",&m,&n);
    ans = qp(m,n) - m * qp(m - 1,n - 1);
    while(ans < 0) ans += mod;
    ans %= mod;
    printf("%lld\n",ans);

	return 0;
}
