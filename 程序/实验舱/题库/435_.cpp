#include<bits/stdc++.h>
using namespace std;

int cz(int n,int k){
	if(n <= 0) return 0;
	if(k == n || k == 1) return 1;
	return cz(n - k,k) + cz(n,k - 1);
}

int main(){
	int n,k;
	cin >> n >> k;
	cout << cz(n,k) << endl;

	return 0;
}

