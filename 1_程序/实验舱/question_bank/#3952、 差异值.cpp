#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

long long N;
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
	sort(A, A + N);
	printf("%d\n", min(A[N - 2] - A[0], A[N - 1] - A[1]));

	return 0;
}
