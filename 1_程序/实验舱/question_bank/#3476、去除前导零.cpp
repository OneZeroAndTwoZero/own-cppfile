#include<bits/stdc++.h>
using namespace std;

string s;
int st = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    while(st < s.size() - 1 && s[st] == '0'){
        st ++;
    }
    for(int i = st;i < s.size();i ++){
        cout << s[i];
    }
    cout << "\n";

	return 0;
}