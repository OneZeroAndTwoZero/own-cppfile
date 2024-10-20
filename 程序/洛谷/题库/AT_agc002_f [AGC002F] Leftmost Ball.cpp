#include<bits/stdc++.h>
using namespace std;

int n,k;
long long mod = 1000000009;
long long inv[4000005],num[4000005];
long long dp[2005][2005];

long long qpow(long long a,long long b){
    // cout << a << "[]" << b << "\n";
    if(b == 0) return 1;
    long long res = qpow(a,(b >> 1));
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res % mod;
}

long long getc(int a,int b){
    if(a == b) return 1LL;
    return (((num[a] * inv[b]) % mod) * inv[a - b]) % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&k);
    if(k == 1){
        printf("1\n");
        return 0;
    }
    num[1] = inv[1] = 1;
    for(int i = 2;i <= 4000000;i ++){
        num[i] = (num[i - 1] * i) % mod;
        inv[i] = qpow(num[i],mod - 2);
    }
    // cout << ";;;\n";
    dp[0][0] = 1;
    for(int i = 1;i <= n;i ++){
        for(int j = 0;j <= n;j ++){
            dp[i][j] += dp[i - 1][j];
            if(j == 0) continue;
            dp[i][j] += ((dp[i][j - 1] * (n - (j - 1))) % mod) * 
            getc(n - i + (n - j + 1) * (k - 1) - 1,k - 2);
            dp[i][j] %= mod;
        }
    }
    printf("%lld\n",dp[n][n]);

    return 0;
}