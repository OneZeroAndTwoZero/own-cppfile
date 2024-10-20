#include<bits/stdc++.h>
using namespace std;

int n,p,out;
int a[1000006],dp[1000006],ans[1000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&p);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        dp[i] = max(a[i],dp[i - 1] + a[i]);
        // cout << i << " " << dp[i] << "[]\n";
    }
    out = 2 * dp[1];
    for(int i = 2;i <= n;i ++){
        ans[i] = out;
        if(i != n) out = max(out,ans[i] + dp[i]);
    }
    out = max(out,dp[1]);
    printf("%d\n",out % p);

	return 0;
}