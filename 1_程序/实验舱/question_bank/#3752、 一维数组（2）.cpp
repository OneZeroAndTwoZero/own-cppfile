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
	for (int i = 0; i < N; i += 2){
		printf("%d ", A[i]);
	}
	printf("\n");
	for (int i = 1; i < N; i += 2){
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}
