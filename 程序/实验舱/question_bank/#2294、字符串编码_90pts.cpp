#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
int cur = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(cur * 10 + (s[i] ^ '0') > 26 || i + 1 < s.size() && s[i + 1] == '0'){
            cout << (char)(cur + 'A' - 1);
            cur = s[i] - '0';
        }else{
            cur = cur * 10 + (s[i] ^ 48);
        }
    }
    cout << (char)(cur + 'A' - 1) << "\n";

    return 0;
}