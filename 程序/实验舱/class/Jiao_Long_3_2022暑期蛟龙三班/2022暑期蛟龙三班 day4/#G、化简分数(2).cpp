#include<bits/stdc++.h>
using namespace std;

int n,x;

int max_g(int n,int x){
	if(n % x == 0) return x;
	return max_g(x,n % x);
}

int main(){
	cin >> n >> x;
	if(n % x == 0){
		cout << n / x << endl;
		return 0;
	}
	if(n >= x){
		cout << n / x << '+';
	}
	n = n % x;
	int max = max_g(n,x);
	cout << n / max << '/' << x / max;

	return 0;
}

