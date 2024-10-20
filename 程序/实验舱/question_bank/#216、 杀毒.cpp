#include<bits/stdc++.h>
using namespace std;

string s, t, ans = "";
bool f[131];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> t;
    for (auto && i : t){
        f[i] = 1;
    }
    for (auto && i : s){
        if (f[i]) continue;
        ans.push_back(i);
    }
    cout << ans << "\n";

    return 0;
}