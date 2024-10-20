#include<bits/stdc++.h>
using namespace std;

stack<char> a;
queue<char> q;
string s;

void out(){
    if(!a.size()) return;
    char c = a.top();
    a.pop();
    out();
    cout << c;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(s[i] == '('){
            a.push(s[i]);
        }else if(s[i] == ')'){
            while(a.top() != '('){
                q.push(a.top());
                a.pop();
            }
            a.pop();
            while(q.size()){
                a.push(q.front());
                q.pop();
            }
        }else{
            a.push(s[i]);
        }
    }
    out();

	return 0;
}