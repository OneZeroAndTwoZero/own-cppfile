#include<bits/stdc++.h>
using namespace std;

string s;
int dp[1005][1005] = {0};
int n;

int dfs(int l,int r){
    if(l == r) return 1;
    if(dp[l][r] != 0) return dp[l][r];
    int res = 0x3f3f3f3f;
    if(s[l] == s[r]) res = min(dfs(l + 1,r),dfs(l,r - 1));
    for(int i = l;i < r;i ++){
        res = min(res,dfs(l,i) + dfs(i + 1,r));
    }
    dp[l][r] = res;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n >> s;
    cout << dfs(0,s.size() - 1) << "\n";

	return 0;
}