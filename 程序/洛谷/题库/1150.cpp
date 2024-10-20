#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	long long ans = n;
	while(n >= k){
		int t = n;
		ans += n / k;
		n %= k;
		n += t / k;
	}
	cout << ans << endl;

	return 0;
}

