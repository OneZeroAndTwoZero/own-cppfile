#include<bits/stdc++.h>
using namespace std;

int n;
long long f[1005] = {0};
long long a1[1005],a2[1005],a3[1005],a4[1005];

int main(){
	f[1] = 1;
	a4[1] = 1;
	for(int i = 2;i <= 100;i ++){
		a4[i] = a4[i - 1] + a3[i - 1];
		a3[i] = a2[i - 1];
		a2[i] = a1[i - 1];
		a1[i] = a4[i];
		f[i] = a1[i] + a2[i] + a3[i] + a4[i];
	}
	while(~scanf("%d",&n)){
		printf("%lld\n",f[n]);
	}

	return 0;
}

