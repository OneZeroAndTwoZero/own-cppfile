#include<bits/stdc++.h>
using namespace std;

int n;
string a;
int dp[255][255] = {0};

int dfs(int l,int r){
    if(r < l) return 0;
    if(l == r) return 1;
    if(dp[l][r] != 0) return dp[l][r];
    int ans = 200,tl = l,tr = r;
    if(a[l] == a[r]) {
        ans = min({ans,dfs(tl + 1,tr),dfs(tl,tr - 1)});
    }
    //cout << l << " " << r << " " << tl << " " << tr << ";;;\n";

    for(int k = l;k < r;k ++){
        //cout << k << endl;
        ans = min(ans,dfs(l,k) + dfs(k + 1,r));
    }
    dp[l][r] = ans;
    //cout << l << " " << r << " " << dp[l][r] << endl;
    return dp[l][r];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> a;
    n = a.size();
    a = "0" + a;
    cout << dfs(1,n) << endl;

    return 0;
}