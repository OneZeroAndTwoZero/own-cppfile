#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
	scanf("%lld",&n);
	if(!n) printf("0");
	while(n){
		printf("%lld",n & 1);
		n >>= 1;
	}
	printf("\n");

	return 0;
}

