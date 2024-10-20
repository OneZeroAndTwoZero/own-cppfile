#include<bits/stdc++.h>
using namespace std;

int N, K, t;
int maxn = -1;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i ++){
		scanf("%d", &t);
		maxn = max(maxn, t);
	}
	printf("%lld\n", 1LL * K * maxn + 1LL * K * (K - 1) / 2);

	return 0;
}
