#include<bits/stdc++.h>
using namespace std;

long long n;
long long ans = 0;

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%lld",&n);
	for(long long i = 1;i < n;i++){
		if(gcd(n,i) == 1){
			ans += i;
		}
	}
	printf("%d\n",ans % 1000000007);

	return 0;
}
