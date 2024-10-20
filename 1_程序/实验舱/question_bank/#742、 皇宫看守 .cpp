#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n, root;
int pos, t, m;
int val[1000006];
vector<int> E[1000006];
int dp[1000006][3]; // 0self 1son 2dad
set<int> s;

void dfs(int u){
	dp[u][0] = val[u];
	dp[u][1] = 0x3f3f3f3f;
	for (auto && i : E[u]){
		dfs(i);
		dp[u][0] += min({dp[i][0], dp[i][1], dp[i][2]});
		dp[u][2] += min({dp[i][0], dp[i][1]});
	}
	for (auto && i : E[u]){
		dp[u][1] = min(dp[u][2] - min(dp[i][0], dp[i][1]) + dp[i][0], dp[u][1]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d", &n);
	for (int i = 1; i <= n; i ++) s.insert(i);
	for (int i = 1; i <= n; i ++){
		scanf("%d", &pos);
		scanf("%d %d", &val[pos], &m);
		while (m --){
			scanf("%d", &t);
			s.erase(t);
			E[pos].push_back(t);
		}
	}
	root = *(s.begin());
	dfs(root);
	printf("%d\n", min({dp[root][0], dp[root][1]}));

    return 0;
}
