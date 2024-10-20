#include<bits/stdc++.h>
using namespace std;

int a[32] = {0};

void cz(int n){
	for(int i = 0;i < 32;i++){
		a[32 - i - 1] = n % 2;
		n /= 2;
	}
}

int main(){
	int n;
	cin >> n;
	cz(n);
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 8;j++){
			cout << a[8 * i + j];
		}
		cout << " ";
	}
	cout << endl;
	for(int i = 3;i >= 0;i--){
		for(int j = 0;j < 8;j++){
			cout << a[8 * i + j];
		}
		cout << " ";
	}
	cout << endl;

	return 0;
}

