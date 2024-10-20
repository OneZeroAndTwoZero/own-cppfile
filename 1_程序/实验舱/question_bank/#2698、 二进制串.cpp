#include<bits/stdc++.h>
using namespace std;

long long n;
long long mod = 99999991239959;

long long mul(long long a, long long b){
    if (!b) return 0;
    long long res = mul(a, (b >> 1));
    res = (res + res) % mod;
    if (b & 1) res = (res + a) % mod;
    return res;
}

long long qpow(long long a, long long b){
    long long res = 1;
    while (b){
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b = (b >> 1);
    }
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld", &n);
    printf("%lld\n", qpow(2, n));

    return 0;
}
