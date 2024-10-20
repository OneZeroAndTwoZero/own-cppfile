#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		cout << a[i] << " ";
	}
	cout << "\n";
	for(int j = n-1;j >= 0;j--){
		cout << a[j] << " ";
	}
	
	return 0;
} 
