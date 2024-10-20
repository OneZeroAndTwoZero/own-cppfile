#include<bits/stdc++.h>
using namespace std;

int n,a[1005] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int max = a[0];
	for(int i = 0;i < n;i++){
		if(a[i] > max){
			max = a[i];
		}
	} 
	for(int i = 0;i < n;i++){
		if(!(a[i] == max)){
			cout << a[i] << " ";
		}
	}
	
	return 0;
} 
