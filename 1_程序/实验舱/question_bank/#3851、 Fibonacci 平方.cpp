#include<bits/stdc++.h>
using namespace std;

long long N, temp, ans = 0, mod = 1000000007;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	cin >> N;
	if (N <= 2){
		cout << "! 1\n";
		std::cout << std::flush;
		return 0;
	}
	cout << "? " << N + 1 << "\n";
	std::cout << std::flush;
	cin >> temp;
	ans = (1LL * temp * temp) % mod;
	cout << "? " << N << "\n";
	std::cout << std::flush;
	cin >> temp;
	ans = (ans + (1LL * temp * temp)) % mod;
	cout << "? " << N - 1 << "\n";
	std::cout << std::flush;
	cin >> temp;
	ans = ((ans - (1LL * temp * temp)) % mod + mod) % mod;
	ans = (ans * (mod + 1) / 2) % mod;
	cout << "! " << ans << "\n";
	std::cout << std::flush;

	return 0;
}
