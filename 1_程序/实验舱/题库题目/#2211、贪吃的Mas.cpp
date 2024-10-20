#include<bits/stdc++.h>
using namespace std;

int n,m;
int val[55],s[55];
int dp[20005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    for(int i = 0;i < n;i ++)
        scanf("%d %d",&val[i],&s[i]);
    memset(dp,0x3f,sizeof(dp));
    dp[0] = 0;
    for(int i = 0;i < n;i ++){
        for(int k = 1;k <= s[i];k ++){
            for(int j = m;j >= val[i];j --){
                dp[j] = min(dp[j],dp[j - val[i]] + 1);
            }
        }
    }
    if(dp[m] == 0x3f3f3f3f) printf("><\n");
    else printf("%d\n",dp[m]);

	return 0;
}