#include<bits/stdc++.h>
using namespace std;

int N;
int A[100005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &A[i]);
	}
	printf("%d\n%d\n", A[0] + A[1], A[N - 1] + A[N - 2]);

	return 0;
}
