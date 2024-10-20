#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	bool o = 0;
	int a;
	while(n){
		a = n % 2;
		if(a == 1) o = 1;
		if(o) cout << a;
		n /= 2;
	}

	return 0;
}

