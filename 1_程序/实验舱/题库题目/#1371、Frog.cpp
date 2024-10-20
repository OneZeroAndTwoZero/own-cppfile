#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],dp[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        dp[i] = 0x3f3f3f3f;
    }
    dp[0] = 0;
    for(int i = 0;i < n;i ++){
        dp[i + 1] = min(dp[i + 1],dp[i] + abs(a[i] - a[i + 1]));
        dp[i + 2] = min(dp[i + 2],dp[i] + abs(a[i + 2] - a[i]));
    }
    printf("%d\n",dp[n - 1]);

	return 0;
}