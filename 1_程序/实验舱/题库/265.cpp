#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,n;
	cin >> a >> b >> n;
	int mg = 0;
	for(int i = 1;i <= a * b;i++){
		if(i % a == 0 || i % b == 0) mg ++;
	}
	long long ans = n / mg * a * b;
	n %= mg;
	for(int i = 1;;i++){
		if(!n) break;
		if(i % a == 0 || i % b == 0) n --;
		ans ++;
	}
	cout << ans << endl;

	return 0;
}

