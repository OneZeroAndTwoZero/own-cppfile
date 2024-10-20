#include<bits/stdc++.h>
using namespace std;

long long x,p,ans = 1,check = 1e18;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%lld",&x);
	p = x % 10;
	x /= 10;
	while(p --){
		if(ans > check / x){
			printf("inf\n");
			return 0;
		}
		ans *= x;
	}
	printf("%lld\n",ans);

	return 0;
}