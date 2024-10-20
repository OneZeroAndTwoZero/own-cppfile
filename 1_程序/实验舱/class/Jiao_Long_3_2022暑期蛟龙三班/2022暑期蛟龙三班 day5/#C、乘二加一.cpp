#include<bits/stdc++.h>
using namespace std;

int n;

void out(int n){
	if(n == 1){
		cout << 1;
		return;
	}
	cout << '(';
	out(n / 2);
	cout << ')' << "*2";
	if(n % 2 == 1) cout << "+1";
}

int main(){
	cin >> n;
	out(n); 

	return 0;
}

