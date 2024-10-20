#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0};
int c[100005] = {0},k[100005] = {0};
long long dp[100005][505] = {0},min_[100005] = {0};
int lpos[505] = {0};

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
        lpos[i] = 1;
    }

    dp[1][0] = min_[1] = 0x3f3f3f3f3f3f3f3f;
    for(int i = 1;i <= m;i ++){
        dp[1][i] = c[i];
        min_[1] = min(min_[1],(long long)c[i]);
    }

    for(int i = 2;i <= n;i ++){
        dp[i][0] = 0x3f3f3f3f3f3f3f3f;
        for(int g = 1;g <= m;g ++){
            while(lpos[g] != i && a[i] - a[lpos[g]] + 1 > k[g])
                lpos[g] ++;
            if(lpos[g] != i){
                dp[i][0] = min(dp[i][0],dp[lpos[g]][g]);
            }
        }
        min_[i] = dp[i][0];
        for(int j = 1;j <= m;j ++){
            dp[i][j] = min_[i - 1] + c[j];
            min_[i] = min(min_[i],dp[i][j]);
        }
        //cout << i << "[][]" << dp[i][0] << endl;
        //cout << i << ";;;" << min_[i] << endl;
    }

    printf("%lld\n",min_[n]);

	return 0;
}