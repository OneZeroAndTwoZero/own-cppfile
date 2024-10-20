#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
__int128 ans,dp[55][55];
int vis[55][55];
int dir[4][2] = {{-2,1},{-2,-1},{-1,2},{-1,-2}};

void putout(__int128 a){
    if(a == 0) return;
    putout(a / 10);
    int t = a % 10;
    printf("%d",t);
}

__int128 dfs(int x,int y){
    if(x <= 0 || x > m || y <= 0 || y > n) return 0;
    if(vis[x][y]) return dp[x][y];
    vis[x][y] = 1;
    for(int i = 0;i < 4;i ++){
        int tx = x + dir[i][0],ty = y + dir[i][1];
        dp[x][y] += dfs(tx,ty);
    }
    return dp[x][y];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d %d %d %d %d",&n,&m,&sx,&sy,&ex,&ey);
    vis[sx][sy] = 1,dp[sx][sy] = 1;
    ans = dfs(ex,ey);
    if(ans == 0){
        printf("0\n");
        return 0;
    }
    putout(ans);

    return 0;
}