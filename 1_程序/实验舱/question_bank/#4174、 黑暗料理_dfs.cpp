#include<bits/stdc++.h>
using namespace std;

int N, M, ans = -1;
int u[1005], v[1005];

bool check(int S){
	for (int i = 0; i < M; i ++){
		if ((S & (1 << u[i])) && (S & (1 << v[i]))) return 0;
	}
	return 1;
}

void dfs(int k, int cnt, int S){
	if (k == N){
		if (check(S)) ans = max(ans, cnt);
		return;
	}
	dfs(k + 1, cnt, S);
	dfs(k + 1, cnt + 1, (S | (1 << (k + 1))));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i ++){
		scanf("%d %d", &u[i], &v[i]);
	}
	dfs(0, 0, 0);
	printf("%d\n", ans);

	return 0;
}
