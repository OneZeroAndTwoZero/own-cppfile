#include<bits/stdc++.h>
using namespace std;

long long f[15] = {1};
int n;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		f[i] = f[i - 1] * (10 - i) + 1;
	}
	printf("%lld\n",f[n]);

	return 0;
}

