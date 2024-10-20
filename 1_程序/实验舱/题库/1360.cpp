#include<bits/stdc++.h>
using namespace std;

void cz(int n){
	if(n == 1){
		cout << 'A';
		return;
	}
	cz(n - 1);
	cout << (char)(n - 1 + 'A');
	cz(n - 1);
}

int main(){
	int n;
	cin >> n;
	cz(n);

	return 0;
}

