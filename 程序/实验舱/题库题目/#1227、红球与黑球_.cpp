#include<bits/stdc++.h>
using namespace std;

int n,m;
long long dp[25][25];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= m;j ++){
            if(!i || !j){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    printf("%lld\n",dp[n][m]);

	return 0;
}