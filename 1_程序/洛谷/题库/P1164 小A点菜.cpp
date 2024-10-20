#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[105] = {0},dp[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i <= m;i ++) dp[i] = 0x3f3f3f3f;
    dp[0] = 1;
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = m;j >= a[i];j --){
            if(dp[j - a[i]] != 0x3f3f3f3f){
                if(dp[j] == 0x3f3f3f3f) dp[j] = 0;
                dp[j] += dp[j - a[i]];
            }
        }
    }
    printf("%d\n",dp[m]);

    return 0;
}