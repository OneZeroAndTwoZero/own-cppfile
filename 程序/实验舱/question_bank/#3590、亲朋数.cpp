#include<bits/stdc++.h>
using namespace std;

int n,p;
string s;
int a[1000006];
long long ans = 0,dp[3][135];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> p;
    cin >> s;
    n = s.size();
    for(int i = 1;i <= n;i ++){
        a[i] = s[i - 1] ^ '0';
        dp[i & 1][a[i] % p] = 1;
        for(int j = 0;j < p;j ++){
            dp[i & 1][(j * 10 + a[i]) % p] += dp[!(i & 1)][j];
            dp[!(i & 1)][j] = 0;
        }
        ans += dp[i & 1][0];
    }
    cout << ans << "\n";

	return 0;
}