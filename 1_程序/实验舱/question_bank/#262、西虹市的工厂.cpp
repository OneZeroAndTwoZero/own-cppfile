#include<bits/stdc++.h>
using namespace std;

int n,m,p,ans = 0,mod = 1000000007;
int x,y;
int dp[105][105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0][0] = 1;
    scanf("%d %d %d",&n,&m,&p);
    while(m --){
        scanf("%d %d",&x,&y);
        for(int i = n;i >= x;i --){
            for(int j = p;j >= 0;j --){
                dp[i][min(j + y,p)] += dp[i - x][j];
                dp[i][min(j + y,p)] %= mod;
            }
        }
    }
    for(int i = 0;i <= n;i ++){
        ans = (ans + dp[i][p]) % mod;
    }
    printf("%d\n",ans);

    return 0;
}