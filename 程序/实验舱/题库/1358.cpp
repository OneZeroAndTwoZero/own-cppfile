#include<bits/stdc++.h>
using namespace std;

void f(int n1,int n2){
	if(n1 == 0) return;
	if(n1 != n2) cout << " + ";
	cout << "sin(" << n1;
	f(n1 - 1,n2);
	cout << ")";
}

void g(int n){
	
}

int main(){

	return 0;
}

