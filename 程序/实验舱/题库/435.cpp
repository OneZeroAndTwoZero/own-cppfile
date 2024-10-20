#include<bits/stdc++.h>
using namespace std;

int a(int n,int k){
	if(k > n) return 0;
	if(k == n || k == 1){
		return 1;
	}
	return a(n - k,k) + a(n,k - 1);
}

int main(){
	int n,k;
	cin >> n >> k;
	cout << a(n,k) << endl;

	return 0;
}

