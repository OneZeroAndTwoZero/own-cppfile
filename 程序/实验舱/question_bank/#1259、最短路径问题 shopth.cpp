#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m,x,y;
node a[105];
double dp[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            dp[i][j] = 0x3f3f3f3f;
        }
    }
    scanf("%d",&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&x,&y);
        dp[x][y] = min(dp[x][y],sqrt(pow((a[x].xi - a[y].xi),2) + pow((a[x].yi - a[y].yi),2)));
        dp[y][x] = min(dp[y][x],sqrt(pow((a[x].xi - a[y].xi),2) + pow((a[x].yi - a[y].yi),2)));
    }   
    
    for(int k = 1;k <= n;k ++){
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
            }
        }
    }
    scanf("%d %d",&x,&y);
    printf("%.2lf\n",dp[x][y]);

	return 0;
}