#include<bits/stdc++.h>
using namespace std;

double out(int a[],int n){
	int max = a[0],max_i;
	for(int i = 0;i < n;i++){
		if(a[i] > max){
			max = a[i];
			max_i = i;
		}
	}
	return max_i;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int out_i = out(a,n);
	for(int i = 0;i < n;i++){
		if(i != out_i){
			cout << a[i] << " ";
		}
	}
	
	return 0;
} 
