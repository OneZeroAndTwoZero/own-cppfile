#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,k;
	cin >> n >> m >> k;
	long long ans = 0;
	for(long long w = 1;w <= n;w ++){
		long long h = ceil((double)k / w);
		if(h > m) continue;
		long long t = n / w + m / h - 2;
		ans = max(ans,t);
	}
	cout << ans << endl;

	return 0;
}

