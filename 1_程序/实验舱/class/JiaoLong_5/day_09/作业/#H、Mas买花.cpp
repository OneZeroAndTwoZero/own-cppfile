#include<bits/stdc++.h>
using namespace std;

long long n,x,y,ans,mo = 1000000007;

long long cheng(int a,int b){
	if(b == 0) return 1;
	long long t = cheng(a,b / 2);
	long long re = (b & 1) ? a : 1;
	re = ((re * t) % mo) * t % mo;
	return re % mo;
}

long long jie(long long c){
	long long re = 1;
	while(c){
		re = re * c;
		re %= mo;
		c --;
	}
	return re;
}

int main(){
	scanf("%lld %lld %lld",&n,&x,&y);
	ans = cheng(2,n);
	ans -= jie(x);
	if(x != y) ans -= jie(n) / (jie(x));
	while(ans < 0){
		ans += mo;
	}
	printf("%lld\n",ans);

	return 0;
}

