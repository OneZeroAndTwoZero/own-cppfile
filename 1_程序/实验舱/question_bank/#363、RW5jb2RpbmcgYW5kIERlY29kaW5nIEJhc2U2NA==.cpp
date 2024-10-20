#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
string op,s,res;
string f = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void encode(string &s,string &res){
    vector<int> num;
    for(auto && i : s){
        for(int power = (1 << 7);power;power >>= 1){
            num.push_back((i & power) / power);
        }
    }
    while(num.size() % 6) num.push_back(0);
    for(int i = 0;i < num.size();i += 6){
        int cur = 0;
        for(int j = i;j < i + 6;j ++){
            cur = (cur << 1) + num[j];
        }
        res.push_back(f[cur]);
    }
    while(res.size() % 4) res.push_back('=');
}

void deencode(string &s,string &res){
    vector<int> num;
    while(s[s.size() - 1] == '=') s.pop_back();
    for(auto && i : s){
        int cur = f.find(i);
        for(int power = (1 << 5);power;power >>= 1){
            num.push_back((cur & power) / power);
        }
    }
    while(num.size() % 8) num.pop_back();
    for(int i = 0;i < num.size();i += 8){
        int cur = 0;
        for(int j = i;j < i + 8;j ++){
            cur = (cur << 1) + num[j];
        }
        res.push_back(cur);
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

    cin >> n;
    while(n --){
        cin >> op >> s;
        res = "";
        if(op == "encode"){
            encode(s,res);
            cout << res << "\n";
        }else{
            deencode(s,res);
            cout << res << "\n";
        }
    }

    return 0;
}