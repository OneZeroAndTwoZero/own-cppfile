#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[105][105];
int dp[105][105];
int dir[10][2] = {{0,1},{0,2},{0,3},{1,0},{1,1},{1,2},{2,0},{2,1},{3,0}};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            dp[i][j] = -0x3f3f3f3f;
            scanf("%d",&a[i][j]);
        }
    }
    dp[0][0] = a[0][0];
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            for(int k = 0;k < 10;k ++){
                int x = i + dir[k][0],y = j + dir[k][1];
                dp[x][y] = max(dp[x][y],dp[i][j] + a[x][y]);
            }
        }
    }
    printf("%d\n",dp[n - 1][m - 1]);

    return 0;
}