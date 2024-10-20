#include<bits/stdc++.h>
using namespace std;

int n,t,d,v,maxn,ans;
string s;
int dp[2005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> s >> t >> d >> v;
        maxn = max(maxn,d);
        for(int j = d;j >= t;j --){
            dp[j] = max(dp[j],dp[j - t] + v);
        }
    }
    for(int i = 1;i <= maxn;i ++){
        ans = max(ans,dp[i]);
    }
    cout << ans << "\n";

    return 0;
}