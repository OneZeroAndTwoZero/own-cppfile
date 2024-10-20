#include<bits/stdc++.h>
using namespace std;

int k,now = 0;
string s,ans;
unordered_map<char,int> f,out;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> k >> s;
    for(int i = 0;i < s.size();i ++){
        int pos = i;
        while(s[pos] == s[i] && pos < s.size())
            pos ++;
        if((pos - i) % k != 0)
            f[s[i]] = 1;
        i = -- pos;
    }
    for(int i = 0;i < s.size();i ++){
        ans.push_back(s[i]);
        if(f[s[i]] == 0){
            if(!out[s[i]]){
                out[s[i]] = 1;
                cout << s[i];
            }
            i = i + k - 1;
        }
    }
    cout << "\n" << ans << "\n";

	return 0;
}