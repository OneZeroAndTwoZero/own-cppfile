#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	} 
	int b[m],c[m];
	for(int i = 0;i < m;i++){
		cin >> b[i] >> c[i];
	}
	int sum = 0;
	for(int i = 0;i < m;i++){
		int x = a[b[i]-1] * c[i];
		sum += x;
	}
	cout << sum << endl;
	
	return 0;
} 
