#include<bits/stdc++.h>
using namespace std;

int t;
long long n,ans = 0;

void fj(long long a){
	long long k = sqrt(a);
	for(long long i = 1;i <= k;i++){
		if(a % i == 0){
			if((a / i) % 2 == 1 || i % 2 == 1) ans ++;
			if((a / i) % 2 == 1 && i % 2 == 1 && i * i != n) ans ++;
		}
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld",&n);
		ans = 0;
		fj(n);
		printf("%lld\n",ans * 2);
	}

	return 0;
}

