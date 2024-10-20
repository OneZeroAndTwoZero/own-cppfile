#include<bits/stdc++.h>
using namespace std;

int ans,st;
string s,p;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s >> p;
    ans = s.size();
    for(int i = 0;i < s.size();i ++){
        int pos = 0;
        for(int j = i;j < s.size();j ++){
            if(j - i + 1 >= ans) break;
            if(s[j] != p[pos]) continue;
            if(++ pos != p.size()) continue;
            ans = j - i + 1;
            st = i;
            break;
        }
    }
    for(int i = st;i - st + 1 <= ans;i ++)
        cout << s[i];
    cout << "\n";

	return 0;
}