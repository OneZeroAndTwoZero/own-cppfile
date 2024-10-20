#include<bits/stdc++.h>
using namespace std;

set<long long> a;
long long n,ans = 0;

void cz(long long t){
	for(long long i = 2;i <= t / i && t != 1;i++){
		while(!t % i){
			a.insert(i);
		}
	}
	if(t != 1) a.insert(t);
}

int main(){
	scanf("%lld",&n);
	cz(n);
	ans = (1 + n - 1) * ((n - 1) / 2.0);

	return 0;
}

