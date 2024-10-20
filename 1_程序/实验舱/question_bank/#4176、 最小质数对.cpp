#include<bits/stdc++.h>
using namespace std;

int N, P = 0, ans;
bool p[10000007];
int pri[2000006];

void Euler_pri(int N){
	for (int i = 2; i <= N; i ++){
		if (!p[i]) pri[P ++] = i;
		for (int j = 0; j < P && i * pri[j] <= N; j ++){
			p[i * pri[j]] = 1;
			if (i % pri[j] == 0) break;
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &N);
	Euler_pri(N);
	ans = N;
	for (int i = 2; i <= N - 2; i ++){
		if (p[i] || p[N - i]) continue;
		ans = min(ans, abs((N - i) - i));
	}
	printf("%d\n", ans);

	return 0;
}
