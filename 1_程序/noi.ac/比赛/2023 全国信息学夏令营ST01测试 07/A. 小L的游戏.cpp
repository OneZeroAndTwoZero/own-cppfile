#include<bits/stdc++.h>
using namespace std;

int t;
long long hp1,hp2,atk1,atk2;
long long dp[515][256][256] = {0};

long long cz(long long i,long long x,long long y){
    if(dp[i][x][y] != 0) return dp[i][x][y];
    if(x > hp1 || y > hp2) return 0x3f3f3f3f3f3f;
    if(i == 1) return atk1 + atk2;
    dp[i][x][y] = 0x3f3f3f3f3f3f;
    int ty,tx;
    tx = x + (i - 1),ty = y + (i - 1);
    long long t1 = atk1,t2 = atk2;
    if(x == 0) t1 = 0;
    if(y == 0) t2 = 0;
    dp[i][x][y] = min(dp[i][x][y],cz(i - 1,tx,y) + t1 + t2);
    dp[i][x][y] = min(dp[i][x][y],cz(i - 1,x,ty) + t1 + t2);
    return dp[i][x][y];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld %lld %lld",&hp1,&hp2,&atk1,&atk2);
        for(int i = 0;i <= sqrt(2 * (hp1 + hp2)) + 10;i ++){
            for(int j = 0;j <= hp1;j ++){
                for(int k = 0;k <= hp2;k ++){
                    dp[i][j][k] = 0;
                }
            }
        }
        printf("%lld\n",cz(6,0,0));
    }

	return 0;
}