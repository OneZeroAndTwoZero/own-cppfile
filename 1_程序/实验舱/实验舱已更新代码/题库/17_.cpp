#include<bits/stdc++.h>
using namespace std;

int fbnq[42] = {1,1};

int sl(int n){
	if(n == 1 || n == 2) return 1;
	if(fbnq[n] != 0) return fbnq[n];
	fbnq[n] = sl(n - 1) + sl(n - 2);
	return fbnq[n];
}

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int n;
		cin >> n;
		cout << sl(n) << endl;
	}

	return 0;
}


