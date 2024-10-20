#include<bits/stdc++.h>
using namespace std;

int n;
int ans[1005] = {0};
int a[1005] = {0};
long long o;

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		int s = a[i];
		ans[i] = 1;
		while(s != i){
			s = a[s];
			ans[i] ++;
		}
	}
	o = ans[1];
	for(int i = 2;i <= n;i++){
		o = o / gcd(o,ans[i]) * (long long)ans[i];
	}
	o %= 998244353;
	printf("%lld\n",o);

	return 0;
}

