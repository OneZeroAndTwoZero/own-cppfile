#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int dp[1005][1005];
bool vis[1005][1005];

int dfs(int x,int y){
    if(vis[x][y]) return dp[x][y];
    vis[x][y] = 1;
    if(x == 0){
        dp[x][y] = y;
    }else if(y == 0){
        dp[x][y] = x;
    }else{
        if(s1[x - 1] == s2[y - 1]){
            dp[x][y] = dfs(x - 1,y - 1);
        }else{
            dp[x][y] = dfs(x - 1,y) + 1;
            dp[x][y] = min(dp[x][y],dfs(x,y - 1) + 1);
            dp[x][y] = min(dp[x][y],dfs(x - 1,y - 1) + 1);
        }
    }
    return dp[x][y];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    cout << dfs(s1.size(),s2.size()) << "\n";

	return 0;
}