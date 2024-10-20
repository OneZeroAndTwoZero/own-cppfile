#include<bits/stdc++.h>
using namespace std;

long long x,y,q,p,ans = 0;

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%lld %lld",&x,&y);
	for(q = 1;q * q <= x * y;q ++){
		if((x * y) % q == 0){
			p = (x * y) / q;
			if(gcd(p,q) == x){
				ans ++;
			}
		}
	}
	ans *= 2;
	if(x == y) ans --;
	printf("%lld\n",ans);

	return 0;
}

