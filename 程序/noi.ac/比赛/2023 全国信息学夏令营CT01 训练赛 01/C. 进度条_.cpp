#include<bits/stdc++.h>
using namespace std;

long long n,k,a,b;
long long ans = 0;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld %lld %lld %lld",&n,&k,&a,&b);
    if(k == 1){
		printf("%lld\n",(n - 1) * a);
		return 0;
	}
    while(n >= k){
        long long t = n / k * k;
        t = n - t;
        ans += a * t;
        n -= t;
        long long c1,c2;
        c1 = (n / k) * (k - 1) * a;
        c2 = b;
        ans += min(c1,c2);
        n = n / k;
    }
    if(n != 1){
        ans += a * (n - 1);
    }
	printf("%lld\n",ans);

	return 0;
}