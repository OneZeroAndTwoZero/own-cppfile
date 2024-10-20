#include<bits/stdc++.h>
using namespace std;

int y(int n,int s){
	if(s < 1) return 0;
	if(n == 1) return 1;
	if(n % s == 0){
		return y(n / s,s) + 1;
	}
	return y(n,s - 1);
	
}

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	cout << y(n,n) << endl;

	return 0;
}

