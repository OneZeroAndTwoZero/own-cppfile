#include<bits/stdc++.h>
using namespace std;

struct node{
	int x, y;
};

int N, M, ans = 0x3f3f3f3f;
int u, v;
node A[100005];
int las[100005];
int F[100005], size[100005];
int maxX[100005], maxY[100005], minX[100005], minY[100005];

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
	maxX[fx] = max(maxX[fx], maxX[fy]), maxY[fx] = max(maxY[fx], maxY[fy]);
	minX[fx] = min(minX[fx], minX[fy]), minY[fx] = min(minY[fx], minY[fy]);
} 

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i ++){
		F[i] = i;
		size[i] = 1;
		scanf("%d %d", &A[i].x, &A[i].y);
		minX[i] = maxX[i] = A[i].x, minY[i] = maxY[i] = A[i].y;
	}
	while (M --){
		scanf("%d %d", &u, &v);
		merge(u, v);
	}
	for (int i = 1; i <= N; i ++){
		if (F[i] != i) continue;
		ans = min(ans, 2 * (maxX[i] - minX[i]) + 2 * (maxY[i] - minY[i]));
	}
	printf("%d\n", ans);

	return 0;
}
