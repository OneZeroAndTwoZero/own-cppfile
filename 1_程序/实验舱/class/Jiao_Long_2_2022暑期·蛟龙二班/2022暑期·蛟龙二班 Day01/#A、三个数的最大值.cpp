#include<bits/stdc++.h>
using namespace std;

int a[15] = {0},max_;

int main(){
	cin >> a[0] >> a[1] >> a[2];
	max_ = a[0];
	if(a[1] > max_){
		max_ = a[1];
	}
	if(a[2] > max_){
		max_ = a[2];
	}
	cout << max_ << endl;
	
	return 0;
} 
