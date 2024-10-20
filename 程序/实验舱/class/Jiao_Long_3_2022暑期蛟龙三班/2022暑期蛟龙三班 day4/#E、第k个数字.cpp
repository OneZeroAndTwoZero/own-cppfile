#include<bits/stdc++.h>
using namespace std;

int n,k;

int ws(int n,int k){
	if(k == 1) return n % 10;
	return ws(n / 10,k - 1);
}

int main(){
	cin >> n >> k;
	cout << ws(n,k) << endl;

	return 0;
}

