#include<bits/stdc++.h>
using namespace std;

int x,y,h,sx,sy,sh;
long long val[205][205][205];
long long dp[205][205][205];
bool vis[205][205][205];

long long dfs(int x,int y,int h){
    if(x <= 0 || y <= 0 || h <= 0) return 0x3f3f3f3f3f3f3f3fLL;
    if(y == 1) return val[x][y][h];
    if(vis[x][y][h]) return dp[x][y][h];
    vis[x][y][h] = 1;
    dp[x][y][h] = val[x][y][h] + min({dfs(x - 1,y,h),dfs(x,y - 1,h),dfs(x,y,h - 1)});
    return dp[x][y][h];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d %d %d",&x,&y,&h,&sx,&sy,&sh);
    for(int j = 1;j <= y;j ++){
        for(int k = 1;k <= h;k ++){
            for(int i = 1;i <= x;i ++){
                scanf("%lld",&val[i][j][k]);
                dp[i][j][k] = 0x3f3f3f3f3f3f3f3fLL;
            }
        }
    }
    for(int j = 1;j <= y;j ++){
        for(int k = 1;k <= h;k ++){
            for(int i = 1;i <= x;i ++){
                if(j == 1) dp[i][j][k] = val[i][j][k];
                dp[i + 1][j][k] = min(dp[i + 1][j][k],dp[i][j][k] + val[i + 1][j][k]);
                dp[i][j + 1][k] = min(dp[i][j + 1][k],dp[i][j][k] + val[i][j + 1][k]);
                dp[i][j][k + 1] = min(dp[i][j][k + 1],dp[i][j][k] + val[i][j][k + 1]);
            }
        }
    }
    // printf("%lld\n",dfs(sx,sy,sh));
    printf("%lld\n",dp[sx][sy][sh]);

    return 0;
}