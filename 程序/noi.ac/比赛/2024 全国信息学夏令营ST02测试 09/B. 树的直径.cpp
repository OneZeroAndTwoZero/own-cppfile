#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, ans = 0;
int pos1 = 1, pos2 = 0;
int fa[1000006];
int h[1000006];
int st[25][1000006];
vector<int> E[1000006];

int LCA(int u, int v){
	if (h[u] > h[v]) swap(u, v);
	while (h[v] > h[u]){
		v = st[__lg(h[v] - h[u])][v];
	}
	if (u == v) return u;
	for (int i = __lg(h[u]); i >= 0; i --){
		if (st[i][u] == st[i][v]) continue;
		u = st[i][u], v = st[i][v];
	}
	return st[0][u];
}

int getdis(int u, int v){
	return h[u] + h[v] - 2 * h[LCA(u, v)];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d", &n);
	h[1] = 1;
	for (int i = 2; i <= n; i ++){
		scanf("%d", &fa[i]);
		st[0][i] = fa[i], h[i] = h[fa[i]] + 1;
		for (int j = 1; j <= __lg(n); j ++){
			st[j][i] = st[j - 1][st[j - 1][i]];
		}
		if (getdis(pos1, i) > ans){
			pos2 = i;
			ans = getdis(pos1, i);
		}
		if (getdis(pos2, i) > ans){
			pos1 = i;
			ans = getdis(pos2, i);
		}
		printf("%d ", ans);
	}
	printf("\n");

    return 0;
}
