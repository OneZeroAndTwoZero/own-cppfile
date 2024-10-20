#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, q, root, pos = 0;
int u, v;
int h[1000006], dfn[1000006];
long long a[2000006];
long long st[25][1000006];
int fa[1000006];
vector<int> E[1000006];

void erg(int u, int dep){
	a[++ pos] = dep * 1000000007LL + u;
	dfn[u] = pos, h[u] = dep;
	for (auto && i : E[u]){
		if (i == fa[u]) continue;
		fa[i] = u;
		erg(i, dep + 1);
		a[++ pos] = dep * 1000000007LL + u;
	}
}

void __init(){
	for (int i = 1; i <= n; i ++){
		st[0][i] = a[i];
	}
	for (int j = 1; j <= __lg(n); j ++){
		for (int i = 1; i + (1 << j) - 1 <= n; i ++){
			st[j][i] = min(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
		}
	}
}

long long getminn(int l, int r){
	int len = (r - l + 1);
	long long res = min(st[__lg(len)][l], st[__lg(len)][r - (1 << (__lg(len))) + 1]);
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d", &n, &q, &root);
	for (int i = 1; i < n; i ++){
		scanf("%d %d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
	}
	erg(root, 1);
	n *= 2;
	__init();
	while (q --){
		scanf("%d %d", &u, &v);
		printf("%lld\n", getminn(dfn[u], dfn[v]) % 1000000007LL);
	}

    return 0;
}
