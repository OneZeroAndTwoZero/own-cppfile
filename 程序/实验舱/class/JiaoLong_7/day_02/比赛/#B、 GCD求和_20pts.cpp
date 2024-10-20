#include<bits/stdc++.h>
using namespace std;

long long n,k,mod = 1000000007;
long long ans = 0;

long long qpow(long long a,long long b){
	if(b == 0) return 1;
	long long res = qpow(a,b >> 1);
	res = (res * res) % mod;
	if(b & 1) res = (res * a) % mod;
	return res % mod;
}

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a % b);
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
    if(k == 1){
		printf("%lld\n",1LL * (n * (n + 1) / 2) % mod);
	}else{
		for(int i = 1;i <= n;i ++){
			ans += (gcd(i,k) * qpow(i,k));
			ans %= mod;
		}
		printf("%lld\n",ans);
	}

    return 0;
}
