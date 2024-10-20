#include<bits/stdc++.h>
using namespace std;

int t,n,pos = 0,mod = 1e9 + 7;
int dp[1000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    dp[0] = 1;
    for(int i = 1;i <= 1000000;i ++)
        dp[i] = (dp[i - 1] * 2 + 1) % mod;
    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }

	return 0;
}