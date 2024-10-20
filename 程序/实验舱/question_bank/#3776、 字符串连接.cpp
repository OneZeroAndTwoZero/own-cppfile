#include<bits/stdc++.h>
using namespace std;

string s1,s2,s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s1 >> s2;
    s = s1 + s2;
    cout << s << "\n";

    return 0;
}
