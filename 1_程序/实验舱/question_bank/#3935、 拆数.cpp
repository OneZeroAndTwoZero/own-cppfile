#include<bits/stdc++.h>
using namespace std;

long long N;
int ans = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lld", &N);
	N *= 2;
	for (long long i = 1; i <= N / i; i ++){
		if (N % i) continue;
		long long n = i, m = N / i;
		long long t = (n + m - 1), s = (-n + m + 1);
		if ((t & 1) || (s & 1) || t < 0 || s < 0) continue;
		if (t == s) continue;
		ans ++;
	}
	printf("%d\n", ans);

	return 0;
}
