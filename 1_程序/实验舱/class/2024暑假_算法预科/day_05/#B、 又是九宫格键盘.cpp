#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

string s;
unordered_map<char,char> f;
unordered_map<char,int> g;

void operate(char x){
    for(int i = 0;i < g[x];i ++){
        cout << f[x];
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

    f['a'] = f['b'] = f['c'] = '2';
    f['d'] = f['e'] = f['f'] = '3';
    f['g'] = f['h'] = f['i'] = '4';
    f['j'] = f['k'] = f['l'] = '5';
    f['m'] = f['n'] = f['o'] = '6';
    f['p'] = f['q'] = f['r'] = f['s'] = '7';
    f['t'] = f['u'] = f['v'] = '8';
    f['w'] = f['x'] = f['y'] = f['z'] = '9';
    g['a'] = g['d'] = g['g'] = g['j'] = g['m'] = g['p'] = g['t'] = g['w'] = 1;
    g['b'] = g['e'] = g['h'] = g['k'] = g['n'] = g['q'] = g['u'] = g['x'] = 2;
    g['c'] = g['f'] = g['i'] = g['l'] = g['o'] = g['r'] = g['v'] = g['y'] = 3;
    g['s'] = g['z'] = 4;
    getline(cin,s);
    for(auto && i : s){
        if(i == ' '){
            cout << "0";
        }else if(i >= 'A' && i <= 'Z'){
            operate(i - 'A' + 'a');
            cout << "1";
        }else{
            operate(i);
        }
    }
    cout << "\n";

    return 0;
}