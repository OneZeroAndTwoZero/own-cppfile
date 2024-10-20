#include<bits/stdc++.h>
using namespace std;

bool ok(int a){
	int ans = 0;
	for(int i = 1;i <= a;i++){
		if(a % i == 0) ans ++;
		if(ans > 4) return 0;
	}
	if(ans == 4) return 1;
	return 0;
}

int main(){
	int l,r;
	cin >> l >> r;
	int ans = 0;
	for(int i = l;i <= r;i++){
		if(ok(i)){
			ans ++;
		}
	}
	printf("The number of RSA numbers between %d and %d is %d",l,r,ans);

	return 0;
}

