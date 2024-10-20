#include<bits/stdc++.h>
using namespace std;

int N;
int A[1200006];
int F[1200006], size[1200006];
int nxt[1200006];

int find(int x){
	if (F[x] == x) return x;
	F[x] = find(F[x]);
	return F[x];
}

void merge(int x, int y){
	int fx = find(x), fy = find(y);
	if (fx == fy) return;
	if (size[fx] < size[fy]) swap(fx, fy);
	F[fy] = fx, size[fx] = size[fx] + size[fy];
	nxt[fx] = max(nxt[fx], nxt[fy]);
} 

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &A[i]);
	}
	for (int i = 1; i <= 1200000; i ++){
		F[i] = i, size[i] = 1;
		nxt[i] = i;
	}
	for (int i = 0; i < N; i ++){
		int cur = nxt[find(A[i])];
		merge(A[i], cur + 1);
		A[i] = cur;
		printf("%d%c", A[i], " \n"[i == N - 1]);
	}

	return 0;
}
