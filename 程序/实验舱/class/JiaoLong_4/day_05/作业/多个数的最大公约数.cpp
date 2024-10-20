#include<bits/stdc++.h>
using namespace std;

int n;
long long t,ans;

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%d",&n);
	scanf("%lld",&ans);
	for(int i = 1;i < n;i++){
		scanf("%lld",&t);
		ans = gcd(ans,t);
	}
	printf("%lld\n",ans);

	return 0;
}

