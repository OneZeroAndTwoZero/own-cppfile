#include<bits/stdc++.h>
using namespace std;

int sum = 0,n;

void cz(int n){
	if(n == 1){
		sum += 1;
		return;
	}
	for(int i = n;i >= 2;i--){
		if(n % i == 0){
			cz(n / i);
		}
	}
}

int main(){
	cin >> n;
	cz(n);
	cout << sum << endl;

	return 0;
}

