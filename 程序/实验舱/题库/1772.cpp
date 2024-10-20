#include<bits/stdc++.h>
using namespace std;

long long ss[2000005] = {0};
long long y = 1;
map<int,bool> zhao;

void; ok(long long n){
	if(n == 2){
		zhao[n] = 1;
		return;
	}
	if(n < 2 || n % 2 == 0) return;
	long long i = 0;
	while(ss[i] != 0 && ss[i] * ss[i] <= n){
		if(n % ss[i] == 0) return;
		i++;
	}
	ss[y ++] = n;
	zhao[n] = 1;
	return;
}

int main(){
	ss[0] = 2;
	for(long long i = 1;i <= 1000001;i++){
		ok(i);
	}

	return 0;
}


