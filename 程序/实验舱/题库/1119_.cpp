#include<bits/stdc++.h>
using namespace std;

int f(int n,int m){
	if(n == 0 || m == 1){
		return 1;
	}
	if(m > n){
		return f(n,n);
	}
	return f(n - m,m) + f(n,m - 1);
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,m;
		cin >> n >> m;
		cout << f(n,m) << endl;
	}

	return 0;
}

