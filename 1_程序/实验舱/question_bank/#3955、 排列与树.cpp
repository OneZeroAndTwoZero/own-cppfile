#include<bits/stdc++.h>
#pragma DCC optimize(2)
using namespace std;

int T, n, pos;
int p[1004], d[1004], id[1004];
vector<int> a[10004];

void build(int u, int l, int r){
    int maxn = -1, maxpos;
    for (int i = l; i <= r; i ++){
        if (maxn >= p[i]) continue;
	maxn = p[i], maxpos = i;
    }
    id[u] = maxpos;
    if (maxpos != l){
        a[u].push_back(++ pos);
	build(pos, l, maxpos - 1);
    }
    if (maxpos != r){
        a[u].push_back(++ pos);
	build(pos, maxpos + 1, r);
    }
string s;

}

void dfs(int u, int dep){
    d[id[u]] = dep;
    for (auto && i : a[u]){
        dfs(i, dep + 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    
    cin >> T;
    while (T --){
        scanf("%d", &n);
	for (int i = 1; i <= n; i ++){
            scanf("%d", &p[i]);
	    id[i] = 0;
	    a[i].clear();
        }
	pos = 1;
	build(1, 1, n);
	dfs(1, 0);
	for (int i = 1; i <= n; i ++){
            printf("%d%c", d[i], " \n"[i == n]);
        }
    }

    return 0;
}
