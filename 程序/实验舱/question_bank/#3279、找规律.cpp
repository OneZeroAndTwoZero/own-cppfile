#include<bits/stdc++.h>
using namespace std;

string s;
unordered_map<char,int> f;
int ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f['0'] = 1,f['4'] = 1,f['6'] = 1,f['8'] = 2,f['9'] = 1;
    cin >> s;
    for(int i = 0;i < s.size();i ++){
        ans += f[s[i]];
    }
    cout << ans << "\n";

    return 0;
}