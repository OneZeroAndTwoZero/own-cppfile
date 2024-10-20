#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	long long ans = 0;
	long long xh = min(n,m);
	for(long long i = 0;i < xh;i++){
		ans += (n - i) * (m - i);
	}
	cout << ans << endl;

	return 0;
}

