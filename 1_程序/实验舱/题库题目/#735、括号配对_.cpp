#include<bits/stdc++.h>
using namespace std;

string s;
int ans[105][105];
bool vis[105][105];

int dfs(int l,int r){
    if(l >= r) return l == r;
    if(vis[l][r]) return ans[l][r];
    vis[l][r] = 1,ans[l][r] = 0x3f3f3f3f;
    if(s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']')
        ans[l][r] = dfs(l + 1,r - 1);
    for(int i = l;i < r;i ++)
        ans[l][r] = min(ans[l][r],dfs(l,i) + dfs(i + 1,r));
    return ans[l][r];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    cout << dfs(0,s.size() - 1) << "\n";

	return 0;
}