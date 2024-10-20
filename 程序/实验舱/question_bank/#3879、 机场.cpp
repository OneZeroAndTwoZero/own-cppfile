#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

struct node{
	int t, d, l;
	bool operator < (const node &a) const{
		return t > a.t;
	}
};

int T, N;
node A[15];
bool ans = 0;

void dfs(int k, int vis, int cur){
	if (k == N){
		ans = 1;
		return;
	}
	if (ans) return;
	int tmp = vis;
	while (tmp){
		int x = lowbit(tmp);
		tmp -= x;
		if (cur > A[__lg(x)].t + A[__lg(x)].d) continue;
		dfs(k + 1, vis - x, max(cur, A[__lg(x)].t) + A[__lg(x)].l);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d", &N);
		for (int i = 0; i < N; i ++){
			scanf("%d %d %d", &A[i].t, &A[i].d, &A[i].l);
		}
		sort(A, A + N);
		ans = 0;
		dfs(0, (1 << N) - 1, -114514);
		if (ans) printf("YES\n");
		else printf("NO\n");
	}
		
	return 0;
}
