#include<bits/stdc++.h>
using namespace std;

int n,v,mod = 1000000007;
int c[1005],w[1005];
int dp[1005],cnt[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&v);
    cnt[0] = 1;
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&c[i],&w[i]);
        for(int j = v;j >= c[i];j --){
            if(dp[j] > dp[j - c[i]] + w[i]) continue;
            if(dp[j] < dp[j - c[i]] + w[i]){
                dp[j] = dp[j - c[i]] + w[i];
                cnt[j] = cnt[j - c[i]];
            }else{
                cnt[j] = (cnt[j] + cnt[j - c[i]]) % mod;
            }
        }
    }
    printf("%d\n",cnt[v]);

    return 0;
}