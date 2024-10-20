#include<bits/stdc++.h>
using namespace std;

long long n,mod = 911451407;
long long sum;

long long q_cheng(long long a,long long b){
    if(b == 0) return 0;
    long long res = q_cheng(a,b >> 1);
    res <<= 1;
    if(b & 1LL) res += a;
    return res % mod;
}

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res *= res;
    res %= mod;
    if(b & 1) res *= a;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    // long long num1 = n,num2 = n + 1;
    // if(n & 1) num2 >>= 1;
    // else num1 >>= 1;
    sum = q_cheng(n,qpow(2,n - 1));
    printf("%lld\n",sum);

	return 0;
}