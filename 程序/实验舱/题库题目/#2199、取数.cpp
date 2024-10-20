#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005] = {0};
int dp[10005][2] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    for(int i = 2;i <= n;i ++){
        dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
        dp[i][1] = dp[i - 2][0] + (a[i - 1] + a[i]);
    }
    printf("%d\n",max(dp[n][0],dp[n][1]));

	return 0;
}