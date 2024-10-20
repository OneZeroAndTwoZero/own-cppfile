#include<bits/stdc++.h>
using namespace std;

string ex;
int cur;
long long mod = 1000000007;
bool vis[1005][1005][3];
long long rem[1005][1005][3];

long long dfs(int l, int r, int ans){
    if (l > r) return 0;
    if (l == r) return (ex[l] - '0' == ans);
    if (vis[l][r][ans]) return rem[l][r][ans];
    vis[l][r][ans] = 1;
    for (int i = l; i < r; i += 2){
        if (ex[i + 1] == '&'){
            if (ans == 1){
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 1);
            }else{
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 0);
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 0);
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 1);
            }
        }else if (ex[i + 1] == '|'){
            if (ans == 1){
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 1);
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 0);
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 1);
            }else{
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 0);
            }
        }else{ // ^
            if (ans == 1){
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 1);
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 0);
            }else{
                rem[l][r][ans] += dfs(l, i, 1) * dfs(i + 2, r, 1);
                rem[l][r][ans] += dfs(l, i, 0) * dfs(i + 2, r, 0);
            }
        }
        rem[l][r][ans] %= mod;
    }
    return rem[l][r][ans];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ex >> cur;
    cout << dfs(0, ex.size() - 1, cur) % mod << "\n";

    return 0;
}