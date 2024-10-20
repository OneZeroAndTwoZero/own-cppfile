#include<bits/stdc++.h>
using namespace std;

int t;
long long h,w;
long long ans,zh;

void gcd(long long a,long long b){
	if(b > a) swap(a,b);
	if(b == 0LL) return;
	if(a % b == 0){
	    ans += a / b - 1;
	    zh += a / b - 1;
	    return;
	}else{
	    ans += a / b;
	    zh += a / b - 1;
	}
	gcd(b,a % b);
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld %lld",&h,&w);
		ans = 0,zh = 0;
		gcd(max(h,w),min(h,w));
		printf("%lld %lld %lld\n",ans,ans - zh + 1,ans + 1);
	}

	return 0;
}

