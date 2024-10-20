#include<bits/stdc++.h>
using namespace std;

int cz(int m,int n){
	if(m == 1) return 1;
	if(n == 1) return m;
	if(n <= m) return cz(m - 1,n) + 1;
	return cz(m - 1,n) + cz(m,n % m) + 1;
}

int main(){
	int m,n,t;
	cin >> t;
	while(t --){
		cin >> n >> m;
		cout << cz(m,n) << endl;
	}

	return 0;
}

