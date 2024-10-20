#include<bits/stdc++.h>
using namespace std;

string s;
int cnt[128];

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
        cnt[s[i]] ++;
    }
    for(int i = 'A';i <= 'Z';i ++){
        if(cnt[i] * cnt[i - 'A' + 'a']){
            cout << (char)i << "\n";
        }
    }

	return 0;
}