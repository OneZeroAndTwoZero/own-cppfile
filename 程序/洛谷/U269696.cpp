#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,n,x;
	cin >> m >> n >> x;
	long long xs = (n - m) / x + 1;
	long long ans = (xs * (xs - 1) * x) / 2 + (xs * m);
	cout << ans << endl;

	return 0;
}

