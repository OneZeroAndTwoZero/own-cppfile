#include<bits/stdc++.h>
using namespace std;

long long n,check,t,ai = 0,aj = 100000;

int main(){
	scanf("%lld",&n);
	for(long long i = 2;i <= n / i;i++){
		for(long long j = 2;;j++){
		    t = pow(i,j);
			if(t > n) break;
			if(t > check || t == check && j < aj) check = t,ai = i,aj = j;
		}
	}
	printf("%lld %lld\n",ai,aj);

	return 0;
}

