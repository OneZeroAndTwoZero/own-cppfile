#include<bits/stdc++.h>
using namespace std;

int n,m;
int c[100005] = {0};
int w[100005] = {0};
int dp[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&c[i],&w[i]);
        w[i] *= c[i];
    }
    for(int i = 0;i < n;i ++){
        for(int j = m;j >= c[i];j --){
            dp[j] = max(dp[j],dp[j - c[i]] + w[i]);
        }
    }
    printf("%lld\n",dp[m]);

	return 0;
}
