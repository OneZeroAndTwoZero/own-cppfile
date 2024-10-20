#include<bits/stdc++.h>
using namespace std;

long long N, mod = 1000000007;

long long qpow(long long a, long long b){
	long long res = 1;
	while (b){
		if (b & 1) res = (res * a) % mod;
		b >>= 1;
		a = (a * a) % mod;
	}
	return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%lld", &N);
	printf("%lld\n", (qpow(2, N) - 2 + mod) % mod);
	
	return 0;
}
