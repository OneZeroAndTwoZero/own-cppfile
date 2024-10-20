#include<bits/stdc++.h>
using namespace std;

long long a[40] = {0}; 

int lt(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(a[n] != 0) return a[n];
	return lt(n - 1) + lt(n - 2);
}

int main(){
	int n;
	while(cin >> n){
	    cout << lt(n) << endl;
	}

	return 0;
}

