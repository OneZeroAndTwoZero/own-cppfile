#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int max = a[0];
	if(a[1] > max){
		max = a[1];
	}
	if(a[2] > max){
		max = a[2];
	}
	cout << max << endl;
	
	return 0;
} 
