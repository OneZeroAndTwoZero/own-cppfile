#include<bits/stdc++.h>
using namespace std;

int N;
int A[100005], B[100005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < N; i ++){
		scanf("%d", &B[i]);
	}
	for (int i = 0; i < N; i ++){
		printf("%d %d ", A[i], B[i]);
	}
	printf("\n");

	return 0;
}
