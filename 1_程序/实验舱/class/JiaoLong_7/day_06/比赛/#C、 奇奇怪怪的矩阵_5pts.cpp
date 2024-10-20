#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m;
long long mod = 10000007,a[1005][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    a[0][1] = 866LL;
    for(int i = 2;i < 1000;i ++){
        a[0][i] = (a[0][i - 1] * 10 + 6LL) % mod;
    }
    while(~scanf("%d %d",&n,&m)){
        for(int i = 1;i <= n;i ++){
            scanf("%lld",&a[i][0]);
        }
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                a[i][j] = (a[i - 1][j] + a[i][j - 1]) % mod;
            }
        }
        printf("%lld\n",a[n][m] % mod);
    }

    return 0;
}