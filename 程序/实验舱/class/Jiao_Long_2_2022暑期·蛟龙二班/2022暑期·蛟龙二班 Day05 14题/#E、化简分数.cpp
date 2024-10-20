#include<bits/stdc++.h>
using namespace std;

int n,m;

int gcd(int a,int b){
	return (b == 0) ? a : gcd(b,a%b); 
}

int main(){
	cin >> n >> m;
	int c = gcd(n,m);
	m = m / c;
	n = n / c;
	cout << n << "/" << m;
	
	return 0;
}
