#include<bits/stdc++.h>
using namespace std;

int N;
long long ans = 0;
int A[200005];
long long sum[200005], prexor[200005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &A[i]);
		sum[i] = sum[i - 1] + A[i];
		prexor[i] = prexor[i - 1] ^ A[i];
	}
	int r = 1;
	for (int l = 1; l <= N; l ++){
		while (r <= N){
			if ((prexor[r] ^ prexor[l - 1]) != sum[r] - sum[l - 1]) break;
			r ++;
		}
		ans += (r - l);
	}
	printf("%lld\n", ans);
	
	return 0;
}
