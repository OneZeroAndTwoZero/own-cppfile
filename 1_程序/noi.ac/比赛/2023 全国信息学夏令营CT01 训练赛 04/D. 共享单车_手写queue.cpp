#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0};
int c[100005] = {0},k[100005] = {0};
long long dp[100005][505] = {0},min_[100005] = {0};
long long ans = 0;
int q[505][100005];
int lpos[505] = {0};
int rpos[505] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= m;i ++){
        scanf("%d %d",&c[i],&k[i]);
    }
    dp[1][0] = min_[1] = 0x3f3f3f3f3f3f3f3f;
    for(int i = 1;i <= m;i ++){
        dp[1][i] = c[i];
        q[i][rpos[i] ++] = 1;
        min_[1] = min(min_[1],(long long)c[i]);
    }
    for(int i = 2;i <= n;i ++){
        dp[i][0] = 0x3f3f3f3f3f3f3f3f;
        for(int g = 1;g <= m;g ++){
            while(lpos[g] != rpos[g] && a[i] - a[q[g][lpos[g]]] + 1 > k[g])
                lpos[g] ++;
            if(lpos[g] != rpos[g]){
                dp[i][0] = min(dp[i][0],dp[q[g][lpos[g]]][g]);
            }
        }
        for(int j = 1;j <= m;j ++){
            dp[i][j] = min_[i - 1] + c[j];
            q[j][rpos[j] ++] = i;
        }
        //cout << i << "[][]" << dp[i][0] << endl;
        min_[i] = 0x3f3f3f3f3f3f3f3f;
        for(int j = 0;j <= m;j ++){
            min_[i] = min(min_[i],dp[i][j]);
        }
        //cout << i << ";;;" << min_[i] << endl;
    }
    ans = dp[n][0];
    for(int i = 1;i <= m;i ++){
        ans = min(ans,dp[n][i]);
    }
    printf("%lld\n",ans);

	return 0;
}