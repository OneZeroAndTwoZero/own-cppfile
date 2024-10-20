#include<bits/stdc++.h>
using namespace std;

long long n,ans = 0,mod = 1000000007;

long long euler(long long x){
	long long res = x;
	for(long long i = 2;i <= x / i;i ++){
		if(x % i) continue;
		// cout << res << ";;;;;\n";
		res = res / i * (i - 1);
		// cout << res << " " << i << "[]\n";
		while(x % i == 0) x /= i;
	}
	if(x != 1) res = res / x * (x - 1);
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
    // cout << euler(n) << ";;\n";
    ans = (euler(n) / 2) % mod * (n % mod);
    printf("%lld\n",ans % mod);

    return 0;
}
