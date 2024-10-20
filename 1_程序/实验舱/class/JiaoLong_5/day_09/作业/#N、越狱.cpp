#include<bits/stdc++.h>
using namespace std;

long long n,m,mo = 100003,ans;

long long cheng(int a,int b){
	if(b == 0) return 1;
	long long t = cheng(a,b / 2);
	long long re = (b & 1) ? a : 1;
	re = ((re * t) % mo) * t % mo;
	return re % mo;
}

int main(){
	scanf("%lld %lld",&m,&n);
	ans = cheng(m,n) - cheng(m - 1,n - 1) * m;
	while(ans < 0){
		ans += mo;
	}
	printf("%lld\n",ans);

	return 0;
}

