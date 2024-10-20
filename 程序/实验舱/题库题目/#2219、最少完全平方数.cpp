#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
int num[1000005],val[1000005];
int dp[20005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i * i <= n;i ++){
        int tem = i * i,s = n / tem;
        for(int k = 1;k <= s;k *= 2){
            val[pos] = k,num[pos ++] = k * tem; 
            s -= k;
        }
        if(s != 0) val[pos] = s,num[pos ++] = s * tem;
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0] = 0;
    for(int i = 0;i < pos;i ++){
        for(int j = n;j >= num[i];j --){
            dp[j] = min(dp[j],dp[j - num[i]] + val[i]);
        }
    }
    printf("%d\n",dp[n]);

	return 0;
}