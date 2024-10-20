#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[300005] = {0};
long long c[100005] = {0},k[100005] = {0};
long long dp[100005][505] = {0},min_[100005] = {0};
long long ans = 0;

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
        scanf("%lld %lld",&c[i],&k[i]);
    }
    dp[1][0] = min_[1] = 0x3f3f3f3f3f3f3f3f;
    for(int i = 1;i <= m;i ++){
        dp[1][i] = c[i];
        min_[1] = min(min_[1],c[i]);
    }
    for(int i = 2;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            dp[i][j] = min_[i - 1] + c[j];
        }
        dp[i][0] = 0x3f3f3f3f3f3f3f3f;
        for(int g = 1;g <= m;g ++){
            for(int j = 1;j < i;j ++){
                //cout << j << "=====" << g << endl;
                if(a[i] - a[j] + 1 <= k[g]){
                    dp[i][0] = min(dp[i][0],dp[j][g]);
                    break;
                }
            }
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