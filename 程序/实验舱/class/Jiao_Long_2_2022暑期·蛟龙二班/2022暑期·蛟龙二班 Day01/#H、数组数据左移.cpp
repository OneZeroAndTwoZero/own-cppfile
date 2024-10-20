#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005];

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int temp;
	for(int i = 1;i <= m;i++){
		temp = a[0];
		for(int j = 0;j < n-1;j++){
			a[j] = a[j+1];
		}
		a[n-1] = temp;
	}
	for(int k = 0;k < n;k++){
		cout << a[k] << " ";
	}
	
	return 0;
} 
