#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005][1005];
int dp[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i < n;i ++){
        for(int j = i + 1;j <= n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 2;i <= n;i ++){
        dp[i] = 0x3f3f3f3f;
        for(int j = 1;j < i;j ++){
            dp[i] = min(dp[i],dp[j] + a[j][i]);
        }
    }
    printf("%d\n",dp[n]);

    return 0;
}