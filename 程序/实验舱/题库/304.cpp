#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long z = 0;
	while(n){
		z += n / 5;
		n /= 5;
	}
	cout << z << endl;

	return 0;
}

