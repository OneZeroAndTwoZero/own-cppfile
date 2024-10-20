#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long n,k,mod = 1000000007,ans = 0;

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&n,&k);
    n %= mod;
    if(k == 2){
        ans = (n * (n + 1)) % mod;
        ans = (ans * (2 * n + 1)) % mod;
        ans = (ans * qpow(6,mod - 2)) % mod;
    }else if(k == 3){
        ans = (n * (n + 1)) % mod;
        ans = (ans * qpow(2,mod - 2)) % mod;
        ans = (ans * ans) % mod;
    }else{
        for(int i = 1;i <= n;i ++){
            ans += qpow(i,k);
            ans %= mod;
        }
    }
    printf("%lld\n",ans);

    return 0;
}