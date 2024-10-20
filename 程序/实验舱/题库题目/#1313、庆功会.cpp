#include<bits/stdc++.h>
using namespace std;

int n,m;
int v[1005] = {0},w[1005] = {0},s[1005] = {0};
int dp[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++)
        scanf("%d %d %d",&v[i],&w[i],&s[i]);
    for(int i = 0;i < n;i ++)
        for(int k = 1;k <= s[i];k ++)
            for(int j = m;j >= v[i];j --)
                dp[j] = max(dp[j],dp[j - v[i]] + w[i]);
    printf("%d\n",dp[m]);

	return 0;
}