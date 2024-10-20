#include<bits/stdc++.h>
using namespace std;

int n,m = 1000000007;
long long a1[1000005],a2[1000005],a3[1000005],a4[1000005];

int main(){
	a4[1] = 1;
	for(int i = 2;i <= 1000000;i ++){
		a4[i] = a4[i - 1] + a3[i - 1];
		a3[i] = a2[i - 1];
		a2[i] = a1[i - 1];
		a1[i] = a4[i];
		a1[i] %= m,a2[i] %= m,a3[i] %= m,a4[i] %= m;
	}
	while(~scanf("%d",&n)){
		printf("%lld %lld\n",(a1[n] + a2[n] + a3[n]) % m,a4[n]);
	}

	return 0;
}

