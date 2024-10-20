#include<bits/stdc++.h>
using namespace std;

string s,t;
int pos,ans = 0;

int operate(int pos,char x){
    for(int i = pos + 1;;i++){
        i %= 26;
        if(i == 0) ans ++;
        if(s[i] == x) return i;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> t;
    pos = -1;
    for(int i = 0;i < t.size();i ++){
        pos = operate(pos,t[i]);
    }
    cout << ans << endl;

    return 0;
}