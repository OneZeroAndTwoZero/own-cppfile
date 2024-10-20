#include<bits/stdc++.h>
using namespace std;

int t,n,x;
int dp[100005][2];

void __init(){
    for(int i = 1;i <= n;i ++)
        dp[i][0] = dp[i][1] = 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        __init();
        for(int i = 1;i <= n;i ++){
            scanf("%d",&x);
            dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + x;
        }
        printf("%d\n",max(dp[n][0],dp[n][1]));
    }

	return 0;
}