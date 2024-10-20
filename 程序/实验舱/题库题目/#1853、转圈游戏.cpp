#include<bits/stdc++.h>
using namespace std;

long long n,m,k,x,mod;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b / 2);
    res = res * res;
    if(b & 1) res *= a;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld",&n,&m,&k,&x);
    mod = n / gcd(n,m);
    k = qpow(10,k);
    // cout << k << "[][]\n";
    while(k --){
        x = (x + m) % n;
    }
    printf("%lld\n",x);

	return 0;
}