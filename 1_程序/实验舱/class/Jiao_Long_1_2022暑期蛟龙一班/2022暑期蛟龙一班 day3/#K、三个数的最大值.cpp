#include<bits/stdc++.h>
using namespace std;

int a,b,c;

int main(){
	cin >> a >> b >> c;
	if(a >= b){
		if(a >= c){
			cout << a << endl;
		}else{
			cout << c << endl;
		}
	}else{
		if(b >= c){
			cout << b << endl;
		}else{
			cout << c << endl;
		}
	}
	
	return 0;
} 
