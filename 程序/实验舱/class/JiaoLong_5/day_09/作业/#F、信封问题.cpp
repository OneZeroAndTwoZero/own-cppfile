#include<bits/stdc++.h>
using namespace std;

int n;
long long d[105] = {0};

int main(){
	d[1] = 0,d[2] = 1;
	scanf("%d",&n);
	for(long long i = 3;i <= n;i++){
		d[i] = (i - 1) * (d[i - 1] + d[i - 2]);
	}
	printf("%lld\n",d[n]);

	return 0;
}

