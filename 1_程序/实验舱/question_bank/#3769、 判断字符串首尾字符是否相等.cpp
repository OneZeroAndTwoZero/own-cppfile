#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s;
    if(s[0] == s[s.size() - 1]) cout << "相等\n";
    else cout << "不相等\n";

    return 0;
}
