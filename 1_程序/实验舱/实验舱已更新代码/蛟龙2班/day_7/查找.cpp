#include<bits/stdc++.h>
using namespace std;

int cha(int a[],int m,int n){
	int sum = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == m){
			sum ++;
		}
	}
	return sum;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	cout << cha(a,m,n);
	
	return 0;
} 
