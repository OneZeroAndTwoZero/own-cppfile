#include<bits/stdc++.h>
using namespace std;

int n;
string s,t;
unordered_map<char,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f['A'] = f['B'] = f['C'] = 2;
    f['D'] = f['E'] = f['F'] = 3;
    f['G'] = f['H'] = f['I'] = 4;
    f['J'] = f['K'] = f['L'] = 5;
    f['M'] = f['N'] = f['O'] = 6;
    f['P'] = f['Q'] = f['R'] = f['S'] = 7;
    f['T'] = f['U'] = f['V'] = 8;
    f['W'] = f['X'] = f['Y'] = f['Z'] = 9;
    cin >> n;
    while(n --){
        cin >> s;
        t = "";
        for(int i = 0;i < s.size();i ++){
            if(s[i] == '-') continue;
            if(s[i] >= '0' && s[i] <= '9') t.push_back(s[i]);
            else t.push_back(f[s[i]] + '0');
        }
        cout << t.substr(0,3) << "-" << t.substr(3,3) << "-" << t.substr(6,4) << "\n";
    }

    return 0;
}