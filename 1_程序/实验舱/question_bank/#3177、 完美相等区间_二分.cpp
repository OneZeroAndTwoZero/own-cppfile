#include<bits/stdc++.h>
using namespace std;

int N;
long long ans = 0;
int A[200005];
long long sum[200005], prexor[200005];

int binary_search(int x){
	int l = x, r = N, res = x;
	while (l <= r){
		int mid = (l + r) >> 1;
		if ((prexor[mid] ^ prexor[x - 1]) == sum[mid] - sum[x - 1]){
			res = mid;
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return res;
}

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
	for (int l = 1; l <= N; l ++){
		ans += (binary_search(l) - l + 1);
	}
	printf("%lld\n", ans);
	
	return 0;
}
