#include<bits/stdc++.h>
using namespace std;

long long n,ans;

int main(){
	scanf("%lld",&n);
	for(long long i = 1;i <= n;i++){
		ans = ((i * i) * (i * i - 1)) / 2 - 4 * (i - 1) * (i - 2);
		printf("%lld\n",ans);
	}

	return 0;
}

