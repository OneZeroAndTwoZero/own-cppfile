#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int h[300005] = {0};
int dp[300005][3] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&h[i]);
    }
    dp[1][0] = dp[1][1] = 1;
    for(int i = 2;i <= n;i ++){
        for(int j = 1;j < i;j ++){
            if(h[j] > h[i]){
                dp[i][0] = max(dp[i][0],dp[j][1] + 1);
            }else if(h[j] < h[i]){
                dp[i][1] = max(dp[i][1],dp[j][0] + 1);
            }
        }
    }
    for(int i = 1;i <= n;i ++){
        ans = max({ans,dp[i][0],dp[i][1]});
    }
    printf("%d\n",ans);

	return 0;
}
