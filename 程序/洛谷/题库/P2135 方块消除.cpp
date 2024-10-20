#include<bits/stdc++.h>
using namespace std;

int m;
int c[505],l[505];
int dp[105][105][105] = {0};

int dfs(int i,int j,int k){
    int tem = 0;
    if(i == j) return (l[i] + k) * (l[i] + k);
    if(dp[i][j][k]) return dp[i][j][k];
    tem = dfs(i,j - 1,0) + (l[j] + k) * (l[j] + k);
    for(int t = i;t < j;t ++){
        if(c[t] == c[j]){
            tem = max(tem,dfs(t + 1,j - 1,0) + dfs(i,t,l[j] + k));
        }
    }
    dp[i][j][k] = tem;
    return dp[i][j][k];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&m);
    for(int i = 1;i <= m;i ++){
        scanf("%d",&c[i]);
    }
    for(int i = 1;i <= m;i ++){
        scanf("%d",&l[i]);
    }
    for(int i = 1;i <= m;i ++){
        if(c[i] == c[i - 1]){
            l[i - 1] += l[i];
            m --,i --;
        }
    }
    printf("%d\n",dfs(1,m,0));

	return 0;
}