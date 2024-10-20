#include<bits/stdc++.h>
using namespace std;

int n,u,v,s;
int a[10005];
int fa[10005];
int dp[10005][2];
vector<int> son[10005];

void dfs(int u){
    dp[u][1] = a[u];
    for(auto && i : son[u]){
        dfs(i);
        dp[u][0] += max(dp[i][1],dp[i][0]);
        dp[u][1] += dp[i][0];
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++) scanf("%d",&a[i]);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        son[v].push_back(u);
        fa[u] = v;
    }
    for(int i = 1;i <= n;i ++)
        if(fa[i] == 0) s = i;
    dfs(s);
    printf("%d\n",max(dp[s][0],dp[s][1]));

	return 0;
}