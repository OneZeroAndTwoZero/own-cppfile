#include<bits/stdc++.h>
using namespace std;

long long x,y,z,n;
long long dp[300005][2];
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> x >> y >> z;
    cin >> s;
    n = s.size();
    dp[0][1] = 0x3f3f3f3f3f3f3f;
    for(int i = 1;i <= n;i ++){
        dp[i][0] = dp[i][1] = 0x3f3f3f3f3f3f3f;
        if(s[i - 1] == 'M'){
            dp[i][1] = min({dp[i - 1][0] + z + x,
            dp[i - 1][1] + x,dp[i - 1][1] + z + y + z,
            dp[i - 1][0] + y + z});
            dp[i][0] = min({dp[i - 1][0] + z + x + z,
            dp[i - 1][1] + x + z,dp[i - 1][1] + z + y,
            dp[i - 1][0] + y});
        }else{
            dp[i][1] = min({dp[i - 1][0] + x + z,
            dp[i - 1][1] + z + x + z,dp[i - 1][0] + z + y,
            dp[i - 1][1] + y});
            dp[i][0] = min({dp[i - 1][0] + x,
            dp[i - 1][1] + z + x,dp[i - 1][0] + z + y + z,
            dp[i - 1][1] + y + z});
        }
        // cout << i << " " << dp[i][0] << " " << dp[i][1] << "\n";
    }
    cout << min(dp[n][0],dp[n][1]) << "\n";

	return 0;
}
