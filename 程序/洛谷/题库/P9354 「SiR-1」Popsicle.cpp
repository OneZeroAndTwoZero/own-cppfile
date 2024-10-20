#include<bits/stdc++.h>
using namespace std;

int t,ans,m;
string s;

int main(){
    cin >> t;
    while(t --){
        cin >> s;
        ans = 0,m = 0;
        for(int i = 0;i < s.size();i ++){
            ans += s[i] - '0';
            if(s[i] == '0') m = 1;
        }
        cout << ans + 8 + m << endl;
    }

    return 0;
}

