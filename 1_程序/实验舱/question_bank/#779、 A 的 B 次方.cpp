#include<bits/stdc++.h>
using namespace std;

long long a, b;
long long mod = 998244353;;

long long qpow(long long a, long long b){
    if (!b) return 1;
	long long res = qpow(a, (b >> 1));
	res = (1LL * res * res) % mod;
	if (b & 1) res = (res * a) % mod;
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld", &a, &b, &mod);
	printf("%lld\n", qpow(a, b));

    return 0;
}
