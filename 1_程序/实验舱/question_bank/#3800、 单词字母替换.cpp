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
    int len = s.size();
    for(int i = 0;i < len;i ++){
        s[i] ++;
    }
    cout << s << "\n";

    return 0;
}
