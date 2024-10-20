#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
string s;
unordered_map<char,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f['A'] = 4,f['K'] = 3,f['Q'] = 2,f['J'] = 1;
    cin >> n;
    while(n --){
        cin >> s;
        for(int i = 0;i < s.size();i ++){
            ans += f[s[i]];
        }
    }
    cout << ans << "\n";

    return 0;
}