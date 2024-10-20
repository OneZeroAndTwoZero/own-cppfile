#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005];
int b[100005],c[100005];

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	} 
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
