#include<bits/stdc++.h>
using namespace std;

void zhuan(int a){
	int n = floor(__lg(a));
	//cout << "///" << n << "////";
	if(n == 1){
		cout << 2;
	}else if(n == 0){
		cout << "2(0)";
	}else{
		cout << "2(";
		zhuan(n);
		cout << ")";
	}
	int s = a - pow(2,n);
	if(s == 0) return;
	cout << "+";
	zhuan(s);
}

int main(){
	int n;
	cin >> n;
	zhuan(n);

	return 0;
}

