#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,a,b;
int x[1005],y[1005],w[1005];
int dp[505][505];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&a,&b);
    for(int i = 0;i <= a;i ++){
        for(int j = 0;j <= b;j ++){
            dp[i][j] = 0x3f3f3f3f;
        }
    }
    dp[0][0] = 0;
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&x[i],&y[i],&w[i]);
        for(int j = a;j >= 0;j --){
            for(int k = b;k >= 0;k --){
                dp[min(j + x[i],a)][min(k + y[i],b)]
                = min(dp[min(j + x[i],a)][min(k + y[i],b)],
                dp[j][k] + w[i]);
            }
        }
    }
    printf("%d\n",dp[a][b]);

    return 0;
}