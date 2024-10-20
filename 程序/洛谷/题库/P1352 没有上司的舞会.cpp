#include<bits/stdc++.h>
using namespace std;

int n;
int u,v;
int r[100005] = {0};
int dp[100005][3] = {0};
vector<int> a[100005];
map<int,int> zhao;

void dfs(int u){
    dp[u][0] = 0,dp[u][1] = r[u];
    for(auto && i : a[u]){
        dfs(i);
        dp[u][1] += dp[i][0];i
        dp[u][0] += max(dp[i][0],dp[i][1]);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&r[i]);
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        a[v].push_back(u);
        zhao[u] ++;
    }
    int s = 0;
    for(int i = 1;i <= n;i ++){
        if(zhao[i] == 0) s = i;
    }
    dfs(s);
    printf("%d\n",max(dp[s][0],dp[s][1]));

	return 0;
}
