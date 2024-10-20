#include<bits/stdc++.h>
using namespace std;

int n,m,minc = 0x3f3f3f3f;
int a[100005] = {0};
int c[100005] = {0},k[100005] = {0};
long long dp[100005] = {0},min_[100005] = {0};
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
        minc = min(minc,c[i]);
    }

    dp[1] = 0x3f3f3f3f3f3f3f3f;
    min_[1] = minc,min_[0] = 0;

    for(int i = 2;i <= n;i ++){
        dp[i] = 0x3f3f3f3f3f3f3f3f;
        for(int g = 1;g <= m;g ++){
            while(lpos[g] != i && a[i] - a[lpos[g]] + 1 > k[g])
                lpos[g] ++;
            if(lpos[g] != i){
                dp[i] = min(dp[i],min_[lpos[g] - 1] + c[g]);
            }
        }
        min_[i] = min(min_[i - 1] + minc,dp[i]);
        //cout << i << "[][]" << dp[i][0] << endl;
        //cout << i << ";;;" << min_[i] << endl;
    }

    printf("%lld\n",min_[n]);

	return 0;
}