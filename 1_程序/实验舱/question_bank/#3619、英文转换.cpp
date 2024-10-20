#include<bits/stdc++.h>
using namespace std;

string s;
int f[128];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f['a'] = f['e'] = f['i'] = f['o'] = f['u'] = -32;
    cin >> s;
    for(auto && i : s){
        i += f[i];
    }
    cout << s << "\n";

    return 0;
}