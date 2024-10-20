#include<bits/stdc++.h>
using namespace std;

int N;
long long A[200005];
int pos[2], f[2] = {-1, 1};

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	pos[0] = N - 1, pos[1] = 0;
	for (int i = 0; i < N; i ++){
		scanf("%lld", &A[i]);
	}
	sort(A, A + N);
	for (int i = 0; i < N; i ++){
		printf("%lld%c", A[pos[i & 1]], " \n"[i == N - 1]);
		pos[i & 1] += f[i & 1];
	}
		
	return 0;
}
