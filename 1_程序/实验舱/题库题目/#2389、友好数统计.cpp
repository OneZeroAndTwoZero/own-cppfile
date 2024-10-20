#include<bits/stdc++.h>
using namespace std;

long long n,mod = 1000000007;

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b / 2);
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    printf("%lld\n",(qpow(4,(n >> 1)) * qpow(5,n - (n >> 1))) % mod);

	return 0;
}