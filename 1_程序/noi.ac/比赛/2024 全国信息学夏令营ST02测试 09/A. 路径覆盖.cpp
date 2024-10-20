#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m;
int u, v;
int h[1000006];
int fa[1000006];
int st[25][1000006];
vector<int> E[1000006];
int val[1000006];
int cnt[1000006];

void erg(int u, int dep){
	h[u] = dep, st[0][u] = fa[u];
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
	for (int i = __lg(h[v]); i >= 0; i --){
		if (st[i][u] == st[i][v]) continue;
		u = st[i][u], v = st[i][v];
	}
	return fa[u];
}

void addedge(int u, int v, int w){
	val[u] += w, val[v] += w;
	int lca = LCA(u, v);
	val[lca] -= 2 * w;
}

void dfs(int u){
	for (auto && i : E[u]){
		if (i == fa[u]) continue;
		dfs(i);
		val[u] += val[i];
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d", &n, &m);
	for (int i = 1; i < n; i ++){
		scanf("%d %d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
	}
	erg(1, 1);
	for (int _ = 0; _ < m; _ ++){
		scanf("%d %d", &u, &v);
		addedge(u, v, 1);
	}
	dfs(1);
	for (int i = 2; i <= n; i ++){
		cnt[val[i]] ++;
	}
	for (int i = 0; i <= m; i ++){
		printf("%d%c", cnt[i], " \n"[i == m]);
	}

    return 0;
}
