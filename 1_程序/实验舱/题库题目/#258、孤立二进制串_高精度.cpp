#include<bits/stdc++.h>
using namespace std;

int n;
string dp[105][2];

string add(string a,string b){
    int ans[105] = {0};
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size() < b.size()) swap(a,b);
    while(a.size() > b.size()) b.push_back('0');
    int l = a.size();
    for(int i = 0;i < l;i ++)
        ans[i] = (a[i] - '0') + (b[i] - '0');
    int pos = 0;
    while(ans[pos] > 9 || pos < l - 1){
        ans[pos + 1] += ans[pos] / 10;
        ans[pos ++] %= 10;
    }
    string res = "";
    for(int i = pos;i >= 0;i --)
        res.push_back(ans[i] + '0');
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    dp[1][0] = "1",dp[1][1] = "1";
    cin >> n;
    for(int i = 2;i <= n;i ++){
        dp[i][0] = add(dp[i - 1][0],dp[i - 1][1]);
        dp[i][1] = dp[i - 1][0];
    }
    cout << add(dp[n][0],dp[n][1]) << "\n";

	return 0;
}