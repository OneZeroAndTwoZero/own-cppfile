#include<bits/stdc++.h>
using namespace std;

int n,v;
int b[205],c[205];
int dp[20005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&b[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&c[i]);
    }
    scanf("%d",&v);
    for(int i = 1;i <= v;i ++){
        dp[i] = 0x3f3f3f3f;
    }
    for(int i = 0;i < n;i ++){
        for(int k = 1;k <= c[i];k *= 2){
            c[i] -= k;
            for(int j = v;j >= k * b[i];j --){
                dp[j] = min(dp[j],dp[j - k * b[i]] + k);
            }
        }
        for(int j = v;j >= c[i] * b[i];j --){
            dp[j] = min(dp[j],dp[j - c[i] * b[i]] + c[i]);
        }
    }
    printf("%d\n",dp[v]);

    return 0;
}