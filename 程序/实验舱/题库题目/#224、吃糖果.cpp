#include<bits/stdc++.h>
using namespace std;

int s,n,m;
int c[10005] = {0};
int w[10005] = {0};
int a[10005] = {0};
long long dp[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d %d",&s,&n,&m);
    for(int i = 0;i < s;i ++){
        scanf("%d",&a[i]);
        c[i % n] += 1;
        w[i % n] += a[i];
    }
    for(int i = 0;i < n;i ++){
        for(int j = m;j >= c[i];j --){
            dp[j] = max(dp[j],dp[j - c[i]] + w[i]);
        }
    }
    printf("%lld\n",dp[m]);

	return 0;
}