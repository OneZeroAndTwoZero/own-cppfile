#include<bits/stdc++.h>
using namespace std;

long long ans = 0, mod = 1e9 + 7;

long long qpow(long long a, long long b){
	long long res = 1;
	while (b){
		if (b & 1) res = (res * a) % mod;
		b >>= 1;
		a = (a * a) % mod;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	
	ans = qpow(9, 10000);
	ans -= qpow(8, 10000) * 2;
	ans += qpow(7, 10000);
	ans = ((ans % mod) + mod) % mod;
	printf("%lld\n", ans);

    return 0;
}
