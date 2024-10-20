#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
		cout << a * a << " " << b * b << " " << c * c << endl;
	}else{
		cout << a << " " << b << " " << c << endl;
	}
	
	return 0;
}
