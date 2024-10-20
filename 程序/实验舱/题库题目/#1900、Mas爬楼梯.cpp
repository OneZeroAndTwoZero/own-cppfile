#include<bits/stdc++.h>
using namespace std;

int n,mod = 100007;
int sum_ji,sum_o = 1;
int dp[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        if(i & 1) 
            dp[i] = sum_o % mod,sum_ji = (sum_ji + dp[i]) % mod;
        else
            dp[i] = sum_ji % mod,sum_o = (sum_o + dp[i]) % mod;
    }
    printf("%d\n",dp[n]);

	return 0;
}