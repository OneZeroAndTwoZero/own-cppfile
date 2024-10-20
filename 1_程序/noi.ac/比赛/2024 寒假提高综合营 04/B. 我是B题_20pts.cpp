#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int id;
string s;
string t;
vector<int> a;
long long ans = 0,mod = 998244535;

long long qpow(int a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

bool check(){
    stack<int> s;
    for(int i = 0;i < t.size();i ++){
        if(t[i] == '('){
            s.push('(');
        }else{
            if(!s.size()) return 0;
            s.pop();
        }
    }
    if(s.size()) return 0;
    return 1;
}

void dfs(int k){
    if(k == s.size()){
        if(t.empty() || !check()) return;
        int cur = a[0] + (s.size() - a[t.size() - 1] - 1);
        ans = (ans + qpow(2,cur)) % mod;
        return;
    }
    a.push_back(k);
    t.push_back(s[k]);
    dfs(k + 1);
    a.pop_back();
    t.pop_back();
    dfs(k + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> id >> s;
    if(s.size() <= 20){
        dfs(0);
    }
    cout << ans % mod << "\n";

    return 0;
}