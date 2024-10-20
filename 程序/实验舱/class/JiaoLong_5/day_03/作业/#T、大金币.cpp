#include<bits/stdc++.h>
using namespace std;

int t;
int a[200005] = {0};
long long k,l = 1,r = 1e9,ans;

bool check(long long x){
	long long tem = x * (x + 1) / 2;
	return tem <= k;
}

int main(){
	scanf("%d",&t);
	while(t --){
		ans = 0,l = 1,r = 1e9;
		scanf("%lld",&k);
		while(l <= r){
			long long mid = (l + r) >> 1;
			if(check(mid)){
				ans = mid * (mid + 1) * (2 * mid + 1) / 6 + (k - mid * (mid + 1) / 2) * (mid + 1);
				l = mid + 1;
			}else{
				r = mid - 1;
			}
		}
		printf("%lld\n",ans);
	}
	

	return 0;
}

