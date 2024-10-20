#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int id,n;
long long ans,mod = 998244535;
long long dp[2005][2005];
string s;

long long qpow(int a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,(b >> 1));
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> id >> s;
    n = s.size();
    s = " " + s;
    for(int i = 1;i <= n;i ++){
        if(s[i] == '('){
            dp[i][1] = qpow(2,i - 1);
            dp[i][0] += dp[i - 1][0];
            for(int j = 1;j <= n;j ++){
                dp[i][j] += dp[i - 1][j - 1];
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= mod;
            }
        }else{
            for(int j = 0;j < n;j ++){
                dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= mod;
            }
            ans += dp[i - 1][1] * qpow(2,n - i);
            ans %= mod;
        }
    }
    cout << ans % mod << "\n";

    return 0;
}