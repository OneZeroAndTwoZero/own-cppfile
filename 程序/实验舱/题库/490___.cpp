#include<bits/stdc++.h>
using namespace std;

int sum = 0;

void y(int n){
	if(n == 1){
		sum ++;
		return;
	}
	for(int i = 0;i <= sqrt(n);i++){
		if(n % i == 0){
			y(n / i);
		}
	}
}

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	cout << sum << endl;

	return 0;
}

