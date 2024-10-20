#include<bits/stdc++.h>
using namespace std;

long long t,n,m;
long long d[105] = {0};

long long cz(int n){
	memset(d,0,sizeof(d));
	d[1] = 0,d[2] = 1;
	for(long long i = 3;i <= n;i++){
		d[i] = (i - 1) * (d[i - 1] + d[i - 2]);
	}
	return d[n];
}

long long jie(long long c){
	long long re = 1;
	while(c){
		re *= c;
		c --;
	}
	return re;
}

int main(){
	scanf("%lld",&t);
	while(t --){
		scanf("%lld %lld",&n,&m);
		long long ans = cz(m) * (jie(n) / (jie(m) * jie(n - m)));
		printf("%lld\n",ans);
	}

	return 0;
}

