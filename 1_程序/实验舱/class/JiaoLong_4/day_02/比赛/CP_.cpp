#include<bits/stdc++.h>
using namespace std;

long long f(long long a){
	return (a + 1) / 2 + (a / 4);
}

int main(){
	long long l,r;
	cin >> l >> r;
	if(l > 0){
		cout << f(r) - f(l - 1) << endl;
	}else if(l == 0 || r == 0){
		cout << f(max(abs(l),abs(r))) + 1 << endl;
	}else if(r < 0){
		cout << f(abs(l)) - f(abs(r + 1)) << endl;
	}else{
		cout << f(abs(l)) + 1 + f(abs(r)) << endl;
	}

	return 0;
}

