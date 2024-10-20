#include<bits/stdc++.h>
using namespace std;

int n;
int u,v,w;
int fa[100005] = {0};
int dp[100005][3] = {0};
vector<int> a[100005];

void erg(int u){
	for(auto && i : a[u]){
		if(i == fa[u]) continue;
		fa[i] = u;
        erg(i);
	}
}

void dfs(int u){
    dp[u][0] = 0,dp[u][1] = 1;
    for(auto && i : a[u]){
    	if(i == fa[u]) continue;
        dfs(i);
        dp[u][1] += min(dp[i][0],dp[i][1]);
        dp[u][0] += dp[i][1];
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i <= n;i ++) dp[i][0] = dp[i][1] = 0x3f3f3f3f;
    for(int i = 0;i < n;i ++){
    	scanf("%d %d",&u,&v); 
        while(v --){
        	scanf("%d",&w);
        	a[u].push_back(w);
		}
    }
    fa[0] = -1;
    erg(0);
    dfs(0);
    printf("%d\n",min(dp[0][0],dp[0][1]));

	return 0;
}