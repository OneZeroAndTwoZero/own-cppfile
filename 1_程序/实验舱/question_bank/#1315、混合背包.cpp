#include<bits/stdc++.h>
using namespace std;

int m,n;
int w[1005],c[1005],p[1005];
int dp[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&w[i],&c[i],&p[i]);
    }
    for(int i = 0;i < n;i ++){
        if(p[i]){
            for(int k = 0;k < p[i];k ++){
                for(int j = m;j >= w[i];j --){
                    dp[j] = max(dp[j],dp[j - w[i]] + c[i]);
                }
            }
        }else{
            for(int j = w[i];j <= m;j ++){
                dp[j] = max(dp[j],dp[j - w[i]] + c[i]);
            }
        }
    }
    printf("%d\n",dp[m]);

	return 0;
}