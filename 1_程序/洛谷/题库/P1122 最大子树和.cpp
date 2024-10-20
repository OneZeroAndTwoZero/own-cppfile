#include<bits/stdc++.h>
using namespace std;

int n,maxn = -2147483647,a,b;
int val[100005];
int fa[100005];
int dp[100005];
vector<int> son[100005];

void erg(int u){
	for(auto && i : son[u]){
		if(fa[u] == i) continue;
		fa[i] = u;
		erg(i);
	}
}

void dfs(int u){
	for(auto && i : son[u]){
		if(fa[u] == i) continue;
		// cout << u << " " << i << "[]\n";
		dfs(i);
		if(dp[i] > 0) dp[u] += dp[i];
	}
	if(dp[u] + val[u] < 0){
		dp[u] = 0;
	}else{
		dp[u] += val[u];
	}
	maxn = max(maxn,dp[u]);
	// cout << u << " ;;; " << dp[u] << endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&val[i]);
		maxn = max(maxn,val[i]);
	}
	if(maxn < 0){
		printf("%d\n",maxn);
		return 0;
	}
	for(int i = 1;i < n;i ++){
		scanf("%d %d",&a,&b);
		son[a].push_back(b);
		son[b].push_back(a);
	}
	erg(1);
	dfs(1);
	printf("%d\n",maxn);

	return 0;
}