#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005];

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
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> m;
	cout << cha(a,m,n);
	
	return 0;
} 
