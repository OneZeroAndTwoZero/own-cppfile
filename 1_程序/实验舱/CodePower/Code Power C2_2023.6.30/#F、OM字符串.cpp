#include<bits/stdc++.h>
using namespace std;

int q;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> q;
    while(q --){
        cin >> s;
        if(s == "MOO"){
            cout << "0\n";
            continue;
        }else if(s.size() <= 2 || s.size() == 3 && s[1] != 'O' || s.find("O") == s.npos){
            cout << "-1\n";
            continue;
        }
        if(s.find("MOO") != s.npos){
            cout << s.size() - 3 << "\n";
        }else if(s.find("MO") != s.npos && s.find("MO") != s.size() - 2 || s.find("OO") != s.npos && s.find("OO") != 0){
            cout << s.size() - 2 << "\n";
        }else{
            cout << s.size() - 1 << "\n";
        }
    }

	return 0;
}