#include<bits/stdc++.h>
using namespace std;

string s;
stack<char> a;
char t[2005];

void cz(int pos){
    if(!a.size() || a.top() == '('){
        if(a.size()) a.pop();
        for(int i = 0;i < pos;i ++){
            a.push(t[i]);
        }
        return;
    }
    t[pos] = a.top();
    a.pop();
    cz(pos + 1);
}

void out(){
    if(!a.size()) return;
    char num = a.top();
    a.pop();
    out();
    cout << num;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(s[i] != ')'){
            a.push(s[i]);
        }else{
            cz(0);
        }
    }
    out();

	return 0;
}
