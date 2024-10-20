#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int m = 0;
	for(int i = 0;i < n;i++){
		int in1,in2;
		cin >> in1 >> in2;
		if(in1 == 1){
			m += in2;
		}else{
			m -= in2;
		}
	}
	cout << m << endl;
	
	return 0;
} 
