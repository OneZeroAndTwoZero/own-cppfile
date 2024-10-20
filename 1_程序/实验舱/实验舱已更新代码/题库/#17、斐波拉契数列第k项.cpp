#include<bits/stdc++.h>
using namespace std;
int k,a[10005],t;
int main(){
	cin >> k;
	a[1] = 1,a[2] = 1;
	for(int i = 3;i <= 41;i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	for(int i = 0;i < k;i++){
		cin >> t;
		cout << a[t] << endl;
	}
	
	return 0;
} 
