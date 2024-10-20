#include<bits/stdc++.h>
using namespace std;

int N;
long long H[1000006], maxn = -1, minn = (long long)1e18;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%lld", &H[i]);
		maxn = max(maxn, H[i]), minn = min(minn, H[i]);
	}
	for (int i = 0; i < N; i ++){
		printf("%lld%c", maxn - H[i], " \n"[i == N - 1]);
	}
	for (int i = 0; i < N; i ++){
		printf("%lld%c", H[i] - minn, " \n"[i == N - 1]);
	}

	return 0;
}
