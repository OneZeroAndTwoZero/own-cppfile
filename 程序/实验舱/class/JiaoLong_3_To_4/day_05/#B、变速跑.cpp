#include<bits/stdc++.h>
using namespace std;

long long t1,t2,a1,a2,b1,b2,p,q,s,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld %lld %lld",&t1,&t2,&a1,&a2,&b1,&b2);
	p = (a1-b1) * t1,q = (a2-b2) * t2;
	if(p + q == 0){
		printf("infinity\n");
		return 0;
	}
	if(p < 0){
		if(p + q < 0){
			printf("0\n");
			return 0;
		}else if(p + q > 0){
			s = abs(p) / abs(p + q);
		}
	}else{
		if(p + q > 0){
			printf("0\n");
			return 0;
		}else if(p + q < 0){
			s = abs(p) / abs(p + q);
		}
	}
	ans = s * 2;
	if(abs(p) % abs(p + q) != 0){
		ans ++;
	}
	printf("%lld\n",ans);

	return 0;
}