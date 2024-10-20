#include<bits/stdc++.h>
using namespace std;
int b[1001] = {};

int suiji(int a[],int n){
	int sum = 0;
	for(int i = 0;i < n;i++){
		b[a[i]]++;
	}
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			sum++;
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
	cout << suiji(a,n) << endl;
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			cout << i << " ";
		}
	}
	
	
	return 0;
}  
