#include<bits/stdc++.h>
using namespace std;

int n,mod = 1e9 + 7;
long long dp[100005] = {0};
int val[5] = {1,2,5,10};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    dp[0] = 1;
    for(int i = 0;i < 4;i ++){
        for(int j = val[i];j <= n;j ++){
            dp[j] = (dp[j] + dp[j - val[i]]) % mod;
        }
    }
    printf("%d\n",dp[n]);

	return 0;
}