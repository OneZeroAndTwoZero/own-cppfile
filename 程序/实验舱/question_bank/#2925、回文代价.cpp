#include<bits/stdc++.h>
using namespace std;

int n,m;
char ch;
int dp[2005][2005];
string s;
unordered_map<char,int> valadd,valdel;

int dfs(int l,int r){
    if(l == r + 1 || l == r) return 0;
    if(dp[l][r]) return dp[l][r];
    if(s[l] == s[r]) return dfs(l + 1,r - 1);
    dp[l][r] = dfs(l + 1,r) + min(valadd[s[l]],valdel[s[l]]);
    dp[l][r] = min(dp[l][r],dfs(l,r - 1) + min(valadd[s[r]],valdel[s[r]]));
    return dp[l][r];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> s;
    while(n --){
        cin >> ch;
        cin >> valadd[ch] >> valdel[ch];
    }
    cout << dfs(0,m - 1) << "\n";

    return 0;
}