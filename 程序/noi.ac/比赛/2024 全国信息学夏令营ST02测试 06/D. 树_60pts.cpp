#include<bits/stdc++.h>
using namespace std;

int n, q, pos = 0;
int u, v;
int op, idx, x;
int a[200005], fa[200005], dfn[200005], out[200005];
vector<int> e[200005];


void erg(int u){
    dfn[u] = ++ pos;
    for (auto && i : e[u]){
        if (i == fa[u]) continue;
	fa[i] = u;
	erg(i);
    }
    out[u] = pos;
}

void update(int p, int u, int x){
    a[u] += x;
    for (auto && i : e[u]){
        if (i == fa[u]) continue;
        update(p, i, -x);
    }
}

int query(int p, int u){
    return a[u];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i ++){
        scanf("%d %d", &u, &v);
	e[u].push_back(v);
	e[v].push_back(u);
    }
    erg(1);
    while (q --){
        scanf("%d %d", &op, &idx);
	if (op == 1){
            scanf("%d", &x);
	    update(1, idx, x);
	}else{
            printf("%d\n", query(1, idx));
	}
    }

    return 0;
}
