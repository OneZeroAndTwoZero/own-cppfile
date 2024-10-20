#include<bits/stdc++.h>
using namespace std;

long long a,b,m;

long long cheng(long long a,long long b){
	if(b == 1){
		return a;
	}
	long long t = cheng(a,b / 2);
	if(b & 1){
		return (((t + t) % m) + a) % m;
	}else{
		return (t + t) % m;
	}
}

long long cz(long long a,long long b){
	if(b == 0){
		return 1;
	}
	long long t = cz(a,b / 2);
	if(b & 1){
		return (cheng(t,t) % m) * a % m;
	}else{
		return (cheng(t,t)) % m;
	}
}

int main(){
	scanf("%lld",&b);
	a = 2,m = 99999991239959;
	printf("%lld\n",cz(a,b));

	return 0;
}

