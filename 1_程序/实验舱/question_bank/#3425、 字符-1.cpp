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
    cout << s[1] << "\n" << s[0] << "\n";

    return 0;
}