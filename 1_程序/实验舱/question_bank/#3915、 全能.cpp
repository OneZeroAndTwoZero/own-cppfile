#include<bits/stdc++.h>
using namespace std;

int N, M;
long long sum = 0, tmp;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i ++){
		scanf("%lld", &tmp);
		sum += tmp;
	}
	sum = max(sum - 1LL * (M - 1) * N, 0LL);
	printf("%lld", sum);
		
	return 0;
}
