#include<bits/stdc++.h>
using namespace std;

int T;
long long k;
bool dp[2005][5];
int d[5][5];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %d %d %d %d",&k,&d[1][2],&d[2][3],&d[3][4],&d[4][1]);
        d[2][1] = d[1][2],d[3][2] = d[2][3],d[4][3] = d[3][4],d[1][4] = d[4][1];
        memset(dp,0,sizeof(dp));
        dp[0][2] = 1;
        // for(int i = 1;i <= 4;i ++){
        //     for(int j = 1;j <= 4;j ++){
        //         cout << d[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        for(int i = 1;i <= 2000;i ++){
            for(int j = 1;j <= 4;j ++){
                for(int k = 1;k <= 4;k ++){
                    if(d[j][k] == 0 || i < d[j][k]) continue;
                    // cout << " " << j << " " << k << " " << i << " " << d[j][k] << " " << dp[i - d[j][k]][k] << "[]\n";
                    if(dp[i - d[j][k]][k]) dp[i][j] = 1 ;
                    // if(dp[i][j] == 1){
                    //     cout << i << " " << j << ";;\n";
                    // }
                }
            }
        }
        for(int i = k;i <= 2000;i ++){
            if(dp[i][2]){
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}