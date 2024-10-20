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

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i ++){
		scanf("%d %d", &u[i], &v[i]);
		u[i] --, v[i] --;
	}
	for (int S = 0; S < (1 << N); S ++){
		if (!check(S)) continue;
		bitset<18> tmp(S);
		ans = max(ans, (int)tmp.count());
	}
	printf("%d\n", ans);

	return 0;
}
