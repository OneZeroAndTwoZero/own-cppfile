#include<bits/stdc++.h>
using namespace std;

int n,sx,maxx;
int c[55];
bool dp[55][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&sx,&maxx);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&c[i]);
    }
    dp[0][sx] = 1;
    for(int i = 1;i <= n;i ++){
        for(int j = 0;j <= maxx;j ++){
            if(j - c[i] >= 0) dp[i][j] |= dp[i - 1][j - c[i]];
            if(j + c[i] <= maxx) dp[i][j] |= dp[i - 1][j + c[i]];
            // if(dp[i][j]) cout << i << " " << j << "[]\n";
        }
    }
    for(int i = maxx;i >= 0;i --){
        if(dp[n][i]){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");

	return 0;
}