#include<bits/stdc++.h>
using namespace std;

long long n,a,b;
long long l = 1,r = 100000000000000,ans;

bool check(long long x){
	long long k = (x / a) + (x / b) - (x / (a * b / __gcd(a,b)));
	return k >= n;
}

int main(){
	scanf("%lld %lld %lld",&a,&b,&n);
	while(l <= r){
		long long mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

