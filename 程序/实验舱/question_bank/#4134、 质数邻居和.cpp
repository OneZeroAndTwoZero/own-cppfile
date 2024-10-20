#include<bits/stdc++.h>
using namespace std;

long long N, ans;

bool check(long long x){
	if (x == 2) return 1;
	if (!(x &1) || x < 2) return 0;
	for (int i = 3; i <= x / i; i += 2){
		if (x % i) continue;
		return 0;
	}
	return 1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lld", &N);
	for (long long i = N - 1; ; -- i){
		if (!check(i)) continue;
		ans += i;
		break;
	}
	for (long long i = N + 1; ; ++ i){
		if (!check(i)) continue;
		ans += i;
		break;
	}
	printf("%lld", ans);

	return 0;
}
