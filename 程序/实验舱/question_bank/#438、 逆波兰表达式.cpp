#include<bits/stdc++.h>
using namespace std;

string s;
stack<long long> val;

long long turn(string &s){
    long long res = 0;
    for (int i = 0; i < s.size(); i ++){
        res = (res << 3) + (res << 1) + (s[i] ^ 48);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> s){
        if (isdigit(s[0])){
            val.push(turn(s));
        }else{
            long long op1, op2;
            op2 = val.top();
            val.pop();
            op1 = val.top();
            val.pop();
            if (s == "+") val.push(op1 + op2);
            else if (s == "-") val.push(op1 - op2);
            else if (s == "*") val.push(op1 * op2);
        }
    }
    cout << val.top() << "\n";

    return 0;
}