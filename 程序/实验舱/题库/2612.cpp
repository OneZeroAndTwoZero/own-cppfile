#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	k = min(n,k);
	long long ans = ceil(n * 2 / (double)k);
	cout << ans << endl;

	return 0;
}

