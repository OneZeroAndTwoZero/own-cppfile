#include<bits/stdc++.h>
using namespace std;

int n,m,p,q,mod = 1000000007;
int a[105][105] = {0};
int dp[105][105][105] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    dp[0][0][0] = 1;
    scanf("%d %d %d %d",&n,&m,&p,&q);
    for(int i = 1;i <= n;i ++)
        for (int j = 1;j <= m;j++)
            scanf("%d", &a[i][j]);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if(a[i][j] == 0){
                for(int k = p;k > 0;k --){
                    for(int g = 0;g <= q;g ++){
                        if(k != p) dp[j][k][g] = dp[j][k - 1][g] + dp[j - 1][k - 1][g];
                        else dp[j][k][g] += dp[j][k - 1][g] + dp[j - 1][k - 1][g];
                    }
                }
                if(p != 0) for(int g = 0;g <= q;g ++) dp[j][0][g] = 0;
            }else{
                for(int g = q;g > 0;g --){
                    for(int k = 0;k <= p;k ++){
                        if(g != q) dp[j][k][g] = dp[j][k][g - 1] + dp[j - 1][k][g - 1];
                        else dp[j][k][g] += dp[j][k][g - 1] + dp[j - 1][k][g - 1];
                    }
                }
                if(q != 0) for(int k = 0;k <= p;k ++) dp[j][k][0] = 0;
            }
        }
    }
    for(int i = 1;i <= m;i ++){
        for(int j = 0;j <= p;j ++){
            for(int k = 0;k <= q;k ++){
                cout << dp[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    printf("%d\n",dp[m][p][q]);

    return 0;
}