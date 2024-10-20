#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, q;
int u, v, k;
int h[1000006];
int fa[1000006];
int st[25][1000006];
vector<int> E[1000006];

void erg(int u, int dep){
	h[u] = dep;
	st[0][u] = fa[u];
	for (int i = 1; i <= __lg(n); i ++){
		st[i][u] = st[i - 1][st[i - 1][u]];
	}
	for (auto && i : E[u]){
		if (i == fa[u]) continue;
		fa[i] = u;
		erg(i, dep + 1);
	}
}

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

int solve(){
	int res = 0;
	for (int i = 1; i <= n; i ++){
		if (abs(getdis(i, u) - getdis(i, v)) != k) continue;
		res ++;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &q);
	for (int i = 1; i < n; i ++){
		scanf("%d %d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
	}
	erg(1, 1);
	while (q --){
		scanf("%d %d %d", &u, &v, &k);
		printf("%d\n", solve());
	}

    return 0;
}
