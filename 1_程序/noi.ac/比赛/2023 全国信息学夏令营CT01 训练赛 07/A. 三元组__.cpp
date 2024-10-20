#include<bits/stdc++.h>
using namespace std;

struct node{
    int ai,bi,ci;
    bool operator < (const node &a) const{
        return (ai - bi) > (a.ai - a.bi);
    }
};

int n,a,b,c;
node num[100005];
int dp[5005][5005] = {0};


int dfs(int i,int j){
    if(dp[i][j] != 0) return dp[i][j];
    if(i == 0) return 0;
    int pos = i - j + 1;
    dp[i][j] = dfs(i - 1,j - 1) + num[i].ci;
    if(pos > a){
        dp[i][j] = max(dp[i][j],dfs(i - 1,j) + num[i].bi);
    }else{
        dp[i][j] = max(dp[i][j],dfs(i - 1,j) + num[i].ai);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&a,&b,&c);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d %d",&num[i].ai,&num[i].bi,&num[i].ci);
    }
    sort(a + 1,a + n + 1);
    printf("%d\n",dfs(n,c));

	return 0;
}