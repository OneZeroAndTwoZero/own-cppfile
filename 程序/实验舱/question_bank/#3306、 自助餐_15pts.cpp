#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,t,ans = 0;
int a[100005],b[100005];
int dp[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&t);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i = 0;i < n;i ++){
        ans = max(ans,dp[t - 1] + b[i]);
        for(int j = t;j >= 0;j --){
            if(j >= a[i]) dp[j] = max(dp[j - a[i]] + b[i],dp[j]);
        }
    }
    printf("%d\n",ans);

    return 0;
}