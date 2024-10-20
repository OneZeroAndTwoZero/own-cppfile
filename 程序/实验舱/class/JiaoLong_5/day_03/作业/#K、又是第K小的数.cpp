#include<bits/stdc++.h>
using namespace std;

long long l1,l2,r1,r2,k,l = 0,r = 10000000000000000,ans = -1;

bool check(long long x){
	long long cnt = max(0LL,min(x - l1 + 1,r1 - l1 + 1)) + max(0LL,min(x - l2 + 1,r2 - l2 + 1));
	return cnt >= k;
}

int main(){
	scanf("%lld %lld %lld %lld %lld",&l1,&l2,&r1,&r2,&k);
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

