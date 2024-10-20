#include<bits/stdc++.h>
using namespace std;

string s;

string cz(){
    string ans = "";
    int res = 0;
    s.push_back('9');
    for(int i = 0;i < s.size() - 1;i ++){
        if(res * 10 + (s[i] - '0') > 26 || s[i + 1] == '0'){
            ans.push_back('A' + res - 1);
            res = s[i] - '0';
        }else{
            res = res * 10 + (s[i] - '0');
        }
    }
    ans.push_back('A' + res - 1);
    return ans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    cout << cz() << "\n";

	return 0;
}