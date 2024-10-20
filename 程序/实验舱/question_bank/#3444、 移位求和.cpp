#include<bits/stdc++.h>
using namespace std;

long long T, A, B, C, D;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lld", &T);
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	ans += (T / 4) * 1111LL * (A + B + C + D);
	if (T % 4) ans += 1000 * A + 100 * B + 10 * C + D;
	if (T % 4 > 1) ans += 1000 * B + 100 * C + 10 * D + A;
	if (T % 4 > 2) ans += 1000 * C + 100 * D + 10 * A + B;
	printf("%lld\n", ans);

	return 0;
}
