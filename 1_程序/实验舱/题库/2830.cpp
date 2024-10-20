#include<bits/stdc++.h>
using namespace std;

void cz(int n){
	if(n == 1){
		cout << "1 ";
		return;
	}
	if(n == 2){
		cout << "2 ";
		return;
	}
	cz(n - 1);
	cout << n << " ";
	cz(n - 2);
}

int main(){
	int n;
	cin >> n;
	cz(n);

	return 0;
}

