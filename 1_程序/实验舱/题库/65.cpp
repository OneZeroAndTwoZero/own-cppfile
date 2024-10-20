#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int a_x = a - 3*b;
	if(a_x < 0){
		cout << "No" << endl;
	}else if(a_x == 0){
		cout << 0 << endl;
	}else{
		cout << a_x << endl;
		cout << -(a_x) << endl;
	}
	
	return 0;
}
