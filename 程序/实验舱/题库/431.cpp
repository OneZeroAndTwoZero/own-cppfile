#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a + b <= c || a + c <= b || b + c <= a){
		cout << "error" << endl;
		return 0;
	}
	if(a == b && b == c){
		cout << 2 << endl;
		return 0;
	}else if(a == b || b == c || a == c){
		cout << 1 << endl;
	}else{
		cout << 3 << endl;
	}

	return 0;
}

