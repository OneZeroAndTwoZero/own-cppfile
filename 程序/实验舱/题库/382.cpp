#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	while(n){
		cout << n % 2;
		n /= 2;
	}

	return 0;
}

