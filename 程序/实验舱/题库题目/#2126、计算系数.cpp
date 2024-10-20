#include<bits/stdc++.h>
using namespace std;

long long a,b,k,n_,m_,mod = 10007,out;
long long ans[1005][1005] = {0};

long long qp(long long a,long long b){
    if(b == 0) return 1;
    long long res = qp(a,b / 2);
    res = res * res % mod;
    if(b & 1LL) res = res * a % mod;
    return res % mod;
}

long long c(long long n,long long m){
    if(m > n || m < 0 || n < 0) return 0;
    if(ans[n][m] != 0) return ans[n][m];
    if(m == n || m == 0) return 1;
    ans[n][m] = (c(n - 1,m) + c(n - 1,m - 1)) % mod;
    return ans[n][m];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld %lld",&a,&b,&k,&n_,&m_);
    out = c(k,m_) * qp(a,n_) * qp(b,m_);
    out %= mod;
    printf("%lld\n",out);

	return 0;
}