#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long five = 0;
	while(n){
		five += n / 5;
		n /= 5;
	}
	cout << five << endl;

	return 0;
}

