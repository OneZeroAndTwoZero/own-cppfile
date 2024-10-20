#include<bits/stdc++.h>
using namespace std;

long long n,t;

int main(){
	scanf("%lld",&n);
	t = pow(2,16);
	printf("%lld\n",((n % t) << 16) + (n >> 16));

	return 0;
}

