#include<bits/stdc++.h>
using namespace std;

int n;
int maxpos[105][105];
long long a[105],dp[105][105];

long long dfs(int l,int r){
    if(l > r) return 1;
    if(l == r){
        maxpos[l][r] = l;
        return a[l];
    }
    if(dp[l][r]) return dp[l][r];
    for(int i = l;i <= r;i ++){
        if(dfs(l,i - 1) * dfs(i + 1,r) + a[i] > dp[l][r]){
            maxpos[l][r] = i;
            dp[l][r] = dfs(l,i - 1) * dfs(i + 1,r) + a[i];
        }
    }
    return dp[l][r];
}

void build(int l,int r){
    if(l > r) return;
    printf("%d ",maxpos[l][r]);
    build(l,maxpos[l][r] - 1);
    build(maxpos[l][r] + 1,r);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    dfs(1,n);
    printf("%lld\n",dp[1][n]);
    build(1,n);
    // for(int i = 1;i <= n;i ++){
    //     for(int j = 1;j <= n;j ++){
    //         printf("%d ",maxpos[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}