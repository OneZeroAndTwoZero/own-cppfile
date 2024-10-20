#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[3005];
long long dp[3005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    dp[0] = 1;
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        for(int j = a[i];j <= m;j ++)
            dp[j] += dp[j - a[i]];
    }
    printf("%lld\n",dp[m]);

	return 0;
}