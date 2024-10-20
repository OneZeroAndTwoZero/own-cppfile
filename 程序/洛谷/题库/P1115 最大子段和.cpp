#include<bits/stdc++.h>
using namespace std;

int n,ans = -2000000000;
int a[200005] = {0},dp[200005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif


    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        dp[i] = max(dp[i - 1] + a[i],a[i]);
        ans = max(ans,dp[i]);
    }
    printf("%d\n",ans);

    return 0;
}

