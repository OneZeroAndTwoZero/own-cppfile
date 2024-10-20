#include<bits/stdc++.h>
using namespace std;

long long tao(long long n,long long a){
	if(!n) return a;
	return tao(n - 1,2 * a - 2);
}

int main(){
	long long n,a;
	cin >> n >> a;
	cout << tao(n,a) << endl;

	return 0;
}

