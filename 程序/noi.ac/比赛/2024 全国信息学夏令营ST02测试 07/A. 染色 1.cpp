#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, m;
int u, v;
long long ans = 1, mod = 998244353;
int col[200005];
vector<int> E[200005];

void dfs(int u, int c){
    col[u] = c;
    for (auto && i : E[u]){
        if (col[i] == col[u]){
            printf("0\n");
            exit(0);
        }
        if (col[i]) continue;
        dfs(i, 3 - c);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d", &n, &m);
    while (m --){;
        scanf("%d %d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
    }
    for (int i = 1; i <= n; i ++){
        if (col[i]) continue;
        dfs(i, 1);
        ans = (ans * 2) % mod;
    }
    printf("%lld\n", ans % mod);

    return 0;
}
