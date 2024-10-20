#include<bits/stdc++.h>
using namespace std;

long long n,k,r;
long long mod;
long long y[1005][1005] = {0};

long long qp(long long a,long long b){
    if(b == 0) return 1;
    long long res = qp(a,b / 2);
    res = res * res % mod;
    if(b & 1) res = res * a % mod;
    return res;
}

long long c(int n,int m){
    if(m > n) return 0;
    if(m < 0 || n < 0) return 0;
    if(n == m) return 1;
    if(y[n][m] != 0) return y[n][m];
    long long res = 0;
    res = res + c(n - 1,m) % mod;
    res = res + c(n - 1,m - 1) % mod;
    y[n][m] = res % mod;
    return y[n][m];
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld %lld %lld %lld",&n,&k,&r,&mod);
    if(k == 1){
        long long ans = qp(2,n);
        for(int i = 0;i < r;i ++){
            ans = (ans + mod - c(n,i)) % mod;
        }
        printf("%lld\n",ans % mod);
    }
    else if(n <= 30 && k <= 30){
        long long ans = 0;
        for(int i = 0;;i ++){
            if(i * k + r > n) break;
            ans += c(n,i * k + r);
            ans %= mod;
        }
        printf("%lld\n",ans % mod);
    }

	return 0;
}