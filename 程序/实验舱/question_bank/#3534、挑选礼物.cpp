#include<bits/stdc++.h>
using namespace std;

int n,v;
int w[1005],c[1005];
int dp[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d,%d",&n,&v);
    for(int i = 0;i < n;i ++){
        scanf("%d,%d",&w[i],&c[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = v;j >= w[i];j --){
            dp[j] = max(dp[j],dp[j - w[i]] + c[i]);
        }
    }
    printf("%d\n",dp[v]);

	return 0;
}