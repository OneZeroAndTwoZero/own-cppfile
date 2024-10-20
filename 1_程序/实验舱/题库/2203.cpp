#include<bits/stdc++.h>
using namespace std;

long long ss[2000005] = {0};
long long y = 1;

bool ok(long long n){
	if(n == 2){
		return 1;
	}
	if(n < 2 || n % 2 == 0) return 0;
	long long i = 0;
	while(ss[i] != 0 && ss[i] * ss[i] <= n){
		if(n % ss[i] == 0) return 0;
		i++;
	}
	ss[y ++] = n;
	return 1;
}

int main(){
	int ans = 0;
	ss[0] = 2;
	long long n;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		if(ok(i)) ans ++;
	}
	cout << ans << endl;

	return 0;
}


