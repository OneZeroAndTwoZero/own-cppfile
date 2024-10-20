#include<bits/stdc++.h>
using namespace std;

long long t;
long long n,m;
long long ans;

long long gcd(long long a,long long b){
	if(!b) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%lld",&t);
	while(t --){
		scanf("%lld %lld",&n,&m);
		ans = n / gcd(n,m) * m;
		printf("%lld\n",ans);
	}

	return 0;
}

