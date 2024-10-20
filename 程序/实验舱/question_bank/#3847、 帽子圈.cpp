#include<bits/stdc++.h>
using namespace std;

int N, ans = 0;
int A[1000005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < (N >> 1); i ++){
		ans += (A[i] == A[i + (N >> 1)]);
	}
	printf("%d\n", (ans << 1));

	return 0;
}
