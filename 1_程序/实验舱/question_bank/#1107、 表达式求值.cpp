#include<bits/stdc++.h>
using namespace std;

char ch;
int temp = 0, mod = 10000;
string S;
stack<string> st;
vector<string> a;
stack<int> val;
unordered_map<string, int> power;

string turn(int x){
    string s = "";
    if (!x) return "0";
    while (x){
        s.push_back('0' + x % 10);
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int re_turn(string s){
    int res = 0;
    for (auto && i : s){
        res = (res << 3) + (res << 1) + (i ^ 48);
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

    power["+"] = 1, power["*"] = 2;
    getline(cin, S);
    for (int i = 0; i < S.size(); i ++){
        ch = S[i];
        if (isdigit(ch)){
            temp = (temp << 3) + (temp << 1) + (ch ^ 48);
            temp %= mod;
            // cout << temp << "[]\n";
        }else{
            a.push_back(turn(temp));
            temp = 0;
            string s = "";
            s.push_back(ch);
            while (st.size() && power[st.top()] >= power[s]){
                a.push_back(st.top());
                st.pop();
            }
            st.push(s);
        }
    }
    a.push_back(turn(temp));
    while (st.size()){
        a.push_back(st.top());
        st.pop();
    }
    for (auto && i : a){
        if (isdigit(i[0])){
            val.push(re_turn(i));
        }else{
            int op1 = val.top();
            val.pop();
            int op2 = val.top();
            val.pop();
            if (i == "+") val.push((op2 + op1) % mod);
            else val.push((op2 * op1) % mod);
        }
    }
    cout << val.top() % mod << "\n";

    return 0;
}