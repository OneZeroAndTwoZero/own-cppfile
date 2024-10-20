#include<bits/stdc++.h>
using namespace std;

int N, K, t, cnt;
int las[100005];
int F[100005], size[100005];

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
} 

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		F[i] = i;
		size[i] = 1;
	}
	for (int i = 1; i <= N; i ++){
		scanf("%d:", &K);
		while (K --){
			scanf("%d", &t);
			if (las[t]) merge(las[t], i);
			las[t] = i;
		}
	}
	priority_queue<int> q;
	for (int i = 1; i <= N; i ++){
		if (F[i] != i) continue;
		cnt ++;
		q.push(size[i]);
	}
	printf("%d\n", cnt);
	while (q.size()){
		printf("%d%c", q.top(), " \n"[q.size() == 1]);
		q.pop();
	}

	return 0;
}
