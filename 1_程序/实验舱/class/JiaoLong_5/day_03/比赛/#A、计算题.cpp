#include<bits/stdc++.h>
using namespace std;

long long m = 1e9 + 7,n,ans = 0;
int a;

int main(){
	scanf("%d %lld",&a,&n);
	for(long long i = 0;i <= n;i++){
		ans += pow(a,i);
		ans %= m;
	}
	ans = (ans * (a - 1)) % m;
	printf("%lld\n",ans);

	return 0;
}

