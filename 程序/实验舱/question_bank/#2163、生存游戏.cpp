#include<bits/stdc++.h>
using namespace std;

int n,m,mod = 10007;
int a[105][105];
int dp[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    dp[1][1] = 1;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int x = i;x <= n;x ++){
                for(int y = j;y <= m;y ++){
                    if(i == x && j == y) continue;
                    if((x - i) + (y - j) > a[i][j]) continue;
                    dp[x][y] = (dp[x][y] + dp[i][j]) % mod;
                }
            }
        }
    }
    printf("%d\n",dp[n][m]);

    return 0;
}