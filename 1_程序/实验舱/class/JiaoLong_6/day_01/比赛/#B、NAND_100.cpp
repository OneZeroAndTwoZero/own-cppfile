#include<bits/stdc++.h>
using namespace std;

string s;
long long dp[1000005][2],ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 1;i <= s.size();i ++){
        if(s[i - 1] == '0'){
            dp[i][0] = 1;
            dp[i][1] = dp[i - 1][1] + dp[i - 1][0];
        }else{
            dp[i][0] = dp[i - 1][1];
            dp[i][1] = dp[i - 1][0] + 1;
        }
        ans += dp[i][1];
    }
    cout << ans << "\n";

	return 0;
}