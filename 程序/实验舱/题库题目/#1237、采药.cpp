#include<bits/stdc++.h>
using namespace std;

int t,m,ans = 0;
int c[1005] = {0};
int w[1005] = {0};
int dp[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&t,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&c[i],&w[i]);
    }
    for(int i = 0;i < m;i ++){
        for(int j = t;j >= c[i];j --){
            dp[j] = max(dp[j],dp[j - c[i]] + w[i]);
        }
    }
    printf("%d\n",dp[t]);

	return 0;
}
