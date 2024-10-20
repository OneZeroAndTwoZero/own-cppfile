#include<bits/stdc++.h>
using namespace std;

int n,m,t,ans;
int val[1005];
int cnta,cntb,cntc,cntd;
int dp[55][55][55][55];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&val[i]);
    }
    for(int i = 0;i < m;i ++){
        scanf("%d",&t);
        if(t == 1) cnta ++;
        else if(t == 2) cntb ++;
        else if(t == 3) cntc ++;
        else cntd ++;
    }
    for(int i = 0;i <= cnta;i ++){
        for(int j = 0;j <= cntb;j ++){
            for(int p = 0;p <= cntc;p ++){
                for(int q = 0;q <= cntd;q ++){
                    if(i != 0) dp[i][j][p][q] = max(dp[i][j][p][q],dp[i - 1][j][p][q]);
                    if(j != 0) dp[i][j][p][q] = max(dp[i][j][p][q],dp[i][j - 1][p][q]);
                    if(p != 0) dp[i][j][p][q] = max(dp[i][j][p][q],dp[i][j][p - 1][q]);
                    if(q != 0) dp[i][j][p][q] = max(dp[i][j][p][q],dp[i][j][p][q - 1]);
                    dp[i][j][p][q] += val[i + j * 2 + p * 3 + q * 4 + 1];
                }
            }
        }
    }
    printf("%d\n",dp[cnta][cntb][cntc][cntd]);

    return 0;
}