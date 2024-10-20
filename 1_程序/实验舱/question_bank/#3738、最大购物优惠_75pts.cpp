#include<bits/stdc++.h>
using namespace std;

int W,V,n;
int w[105],v[105],c[105];
int dp[105][105];
int f[105][105];

void putout(int a,int b){
    if(f[a][b] == 0) return;
    putout(a - w[f[a][b]],b - v[f[a][b]]);
    printf("%d ",f[a][b]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&W,&V,&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d %d",&w[i],&v[i],&c[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = W;j >= w[i];j --){
            for(int k = V;k >= v[i];k --){
                if(dp[j - w[i]][k - v[i]] + c[i] > dp[j][k]){
                    dp[j][k] = dp[j - w[i]][k - v[i]] + c[i];
                    f[j][k] = i;
                }
            }
        }
    }
    printf("%d\n",dp[W][V]);
    putout(W,V);

    return 0;
}