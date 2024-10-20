#include<bits/stdc++.h>
using namespace std;

int n,m,k,x,y;
int a[45][45] = {0},sum[45][45] = {0};
int dp[45][45][45][45] = {0};

int num(int x1,int x2,int y1,int y2){
    return sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
}

int dfs(int x1,int x2,int y1,int y2){
    if(dp[x1][y1][x2][y2] != 0) return dp[x1][y1][x2][y2];
    int ans = 1000000;
    for(int i = x1;i <= x2;i ++){
        for(int j = y1;j <= y2;j ++){
            int t = dfs(x1,y1,i,j) + dfs()
            if(num(x1,x2,y1,y2) == 1) ans = min(ans,dfs())
        }
    }
    dp[x1][y1][x2][y2] = ans;
    return ans;
}

int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i = 0;i < k;i ++){
        scanf("%d %d",&x,&y);
        a[x][y] = 1;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
        }
    }

    return 0;
}