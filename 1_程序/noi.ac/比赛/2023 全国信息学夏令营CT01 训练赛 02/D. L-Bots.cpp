#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
long long ans;
bool to[15][15][15][15] = {0};
long long dp[1005][3] = {0};

void suan(){
    long long cnt = 0;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int k = 1;k <= n;k ++){
                for(int g = 1;g <= m;g ++){
                    if(to[i][j][k][g] == 1 && to[k][g][i][j] == 1){
                        cnt += max(0,a[i][j] + a[k][g]);
                    }
                }
            }
        }
    }
    ans = max(cnt / 2,ans);
}

void dfs(int x,int y){
    if(x == n + 1 && y == m + 1){
        suan();
        return;
    }
    for(int i = 0;i < 4;i ++){
        if(i == 0){
            to[x][y][x - 1][y] = 1;
            to[x][y][x][y + 1] = 1;
        }else if(i == 1){
            to[x][y][x - 1][y] = 1;
            to[x][y][x][y - 1] = 1;
        }else if(i == 2){
            to[x][y][x + 1][y] = 1;
            to[x][y][x][y + 1] = 1;
        }else{
            to[x][y][x + 1][y] = 1;
            to[x][y][x][y - 1] = 1;
        }
        int tx = x,ty = y;
        if(y != m) ty ++;
        else if(x != n){
            tx ++,ty = 1;
        }else{
            tx = n + 1,ty = m + 1;
        }
        dfs(tx,ty);
        if(i == 0){
            to[x][y][x - 1][y] = 0;
            to[x][y][x][y + 1] = 0;
        }else if(i == 1){
            to[x][y][x - 1][y] = 0;
            to[x][y][x][y - 1] = 0;
        }else if(i == 2){
            to[x][y][x + 1][y] = 0;
            to[x][y][x][y + 1] = 0;
        }else{
            to[x][y][x + 1][y] = 0;
            to[x][y][x][y - 1] = 0;
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n * m <= 10){
    //if(n * m <= 5){
        dfs(1,1);
    }else if(n == 1){
        dp[1][0] = dp[1][1] = 0;
        for(int i = 2;i <= m;i ++){
            dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
            dp[i][1] = max(dp[i - 1][1],dp[i - 1][0] + max(0,a[1][i - 1] + a[1][i]));
        }
        ans = max(dp[m][0],dp[m][1]);
    }
    printf("%lld\n",ans);

	return 0;
}