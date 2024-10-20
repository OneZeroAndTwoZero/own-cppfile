#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],dp[100005][2];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    for(int i = 1;i <= n;i ++){
        dp[i][0] = dp[i][1] = min(dp[i - 1][0],dp[i - 1][1]) + 1;
        if(i != 1 && a[i] <= a[i - 1])
            dp[i][0] = min(dp[i][0],dp[i - 1][0]);
        if(i != 1 && a[i] >= a[i - 1])
            dp[i][1] = min(dp[i - 1][1],dp[i][1]);
    }
    printf("%d\n",min(dp[n][0],dp[n][1]));

	return 0;
}