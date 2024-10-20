#include<bits/stdc++.h>
using namespace std;

int n,m,mod = 100003;
int x,y;
int a[1005][1005];
int dp[1005][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&x,&y);
        a[x][y] ++;
    }
    dp[0][1] = 1;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n;j ++){
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod; 
            if(a[i][j]) dp[i][j] = 0;
        }
    }
    printf("%d\n",dp[n][n]);

	return 0;
}