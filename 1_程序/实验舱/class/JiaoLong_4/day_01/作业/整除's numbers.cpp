#include<bits/stdc++.h>
using namespace std;

int t;
long long n,b;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%lld %lld",&n,&b);
		printf("%lld\n",n / b);
	}

	return 0;
}

