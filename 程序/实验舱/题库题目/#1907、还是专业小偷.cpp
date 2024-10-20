#include<bits/stdc++.h>
using namespace std;

int n,u,v;
int val[100005];
int dp[100005][2];
int fa[100005];
vector<int> a[100005];

void erg(int u){
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
    }
}

void dfs(int u){
    dp[u][1] = val[u];
    for(auto && i : a[u]){
        if(i == fa[u]) continue;
        dfs(i);
        dp[u][0] += max(dp[i][0],dp[i][1]);
        dp[u][1] += dp[i][0];
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&val[i]);
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    erg(1);
    dfs(1);
    printf("%d\n",max(dp[1][0],dp[1][1]));

	return 0;
}