#include<bits/stdc++.h>
using namespace std;

int n,x;
int dp[50005][3];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&x);
        dp[i][0] = min({dp[i - 1][0],dp[i - 1][1],dp[i - 1][2]}) + x;
        dp[i][1] = dp[i - 1][0];
        if(i >= 2) dp[i][2] = dp[i - 2][0];
    }
    printf("%d\n",min({dp[n][0],dp[n][1],dp[n][2]}));

	return 0;
}