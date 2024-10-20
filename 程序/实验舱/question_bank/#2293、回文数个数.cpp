#include<bits/stdc++.h>
using namespace std;

long long n,mod = 1000000007,ans = 10;

long long qpow(long long a,long long b){
    if(b == 0) return 1LL;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    ans += (qpow(10,(n - 1) >> 1) - 1) * 11;
    if(n % 2 == 0){
        ans += qpow(10,n >> 1) - qpow(10,(n >> 1) - 1);
    }
    printf("%lld\n",((ans % mod) + mod) % mod);

    return 0;
}