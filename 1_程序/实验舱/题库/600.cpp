#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	long long tem = a;
	if(a < b){
		swap(a,b);
	}
	return a % b == 0 ? b : gcd(b,a % b);
}

int main(){
	long long n,m;
	cin >> n >> m;
	long long ans = n * m /gcd(n,m);
	cout << ans << endl;

	return 0;
}

