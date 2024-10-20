#include<bits/stdc++.h>
using namespace std;

string s,t;
int mod = 1000000007,dp[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> t;
    dp[0] = 1;
    for(int i = 0;i < s.size();i ++){
        for(int j = t.size();j > 0;j --){
            if(t[j - 1] != s[i]) continue;
            dp[j] = (dp[j] + dp[j - 1]) % mod;
        }
    }
    cout << dp[t.size()] << "\n";

    return 0;
}