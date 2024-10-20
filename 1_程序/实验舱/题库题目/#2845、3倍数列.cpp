#include<bits/stdc++.h>
using namespace std;

long long n,ans;
int t;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld",&n);
		ans = ((n + 1) / 3) * 2;
		n = (n + 1) % 3;
		if(n) ans ++;
		printf("%lld\n",-- ans);
	}

	return 0;
}

