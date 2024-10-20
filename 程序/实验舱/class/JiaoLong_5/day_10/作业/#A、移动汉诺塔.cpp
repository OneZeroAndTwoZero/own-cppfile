#include<bits/stdc++.h>
using namespace std;

int n;
long long f[105] = {0}; 

int main(){
	f[0] = 0;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		f[i] = 2 * f[i - 1] + 1;
	}
	printf("%lld\n",f[n]);

	return 0;
}

