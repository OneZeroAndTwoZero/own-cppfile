#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	long long t;
	cin >> t;
	while(t --){
		long long n,m;
		cin >> n >> m;
		long long g = gcd(m,n);
		m /= g;
		long long ans = n * m;
		cout << ans << endl;
    }

	return 0;
}

