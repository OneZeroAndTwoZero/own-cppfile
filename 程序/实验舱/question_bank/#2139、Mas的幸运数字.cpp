#include<bits/stdc++.h>
using namespace std;

int n,mod = 925147;
int dp[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 2;i <= 10000;i ++){
        dp[i] = ((dp[i - 1] << 1) + 2) % mod;
    }
    for(int i = 2;i <= 10000;i ++){
        dp[i] = (dp[i] + dp[i - 1]) % mod;
    }
    while(~scanf("%d",&n)){
        printf("%d\n",dp[n]);
    }

    return 0;
}