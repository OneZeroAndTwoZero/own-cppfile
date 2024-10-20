#include<bits/stdc++.h>
using namespace std;

string s;
string a[5];

void putout(){
    cout << a[0] << "." << a[1] << "." << a[2] << "." << a[3] << "\n";
}

int turn(string t){
    int res = 0;
    for(int i = 0;i < t.size();i ++){
        res = res * 10;
        res += (t[i] - '0');
    }
    return res;
}

void dfs(int k,int pos){
    if(k == 4){
        if(pos == s.size()) putout();
        return;
    }
    if(pos >= s.size()) return;
    a[k] = "";
    for(int i = pos;i < s.size();i ++){
        a[k].push_back(s[i]);
        if(a[k].size() > 1 && a[k][0] == '0') continue;
        if(turn(a[k]) > 255) break;
        dfs(k + 1,i + 1);
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

    cin >> s;
    dfs(0,0);

    return 0;
}