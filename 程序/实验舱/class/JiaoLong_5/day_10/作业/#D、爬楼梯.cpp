#include<bits/stdc++.h>
using namespace std;

int n;
long long f[105] = {0};

int main(){
	
	f[0] = 1,f[1] = 1;
	for(int i = 2;i <= 38;i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	while(~scanf("%d",&n)){
		printf("%lld\n",f[n]);
	}

	return 0;
}

