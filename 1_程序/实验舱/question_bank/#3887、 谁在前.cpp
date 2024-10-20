#include<bits/stdc++.h>
using namespace std;

int N, Q;
int t, x, y, z;
long long f[1000006];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &t);
		f[t] = 1919810LL * i + t;
	}
	scanf("%d", &Q);
	while (Q --){
		scanf("%d %d %d", &x, &y, &z);
		printf("%lld\n", min({f[x], f[y], f[z]}) % 1919810LL);
	}
	
	return 0;
}
