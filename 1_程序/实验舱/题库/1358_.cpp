#include<bits/stdc++.h>
using namespace std;

void f(int n,int k){
	if(n == 0){
		return;
	}
	if(n != k){
		cout << "+";
	}
	cout << "sin(" << k - n + 1;
	f(n - 1,k);
	cout << ")";
}

void g(int n,int k){
	if(n == 0){
		return;
	}
	if(n != k){
		cout << "(";
	}
	g(n - 1,k);
	f(n,n);
	cout << "+" << k - n + 1;
	if(n != k){
		cout << ")";
	}
}

int main(){
	int n;
	cin >> n;
	g(n,n);

	return 0;
}

