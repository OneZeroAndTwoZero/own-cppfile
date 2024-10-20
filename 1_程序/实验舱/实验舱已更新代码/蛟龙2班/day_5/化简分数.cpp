#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	return (b == 0) ? a : gcd(b,a%b); 
}

int main(){
	int n,m;
	cin >> n >> m;
	int c = gcd(n,m);
	m  = m / c;
	n  = n / c;
	cout << n << "/" << m;
	
	return 0;
}
