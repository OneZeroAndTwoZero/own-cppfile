#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s,t = "";
long long ans = 0,mod = 1000000007;
long long num[1000005],inv[1000005];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
}

long long get(long long a,long long b){
    if(a < b) return 0;
    if(a == b) return 1;
    return (((num[a] * inv[b]) % mod) * inv[a - b]) % mod;
}

bool check(){
    if((t.size() & 1) || !t.size()) return 0;
    for(int i = 0;i < (t.size() >> 1);i ++){
        if(t[i] != '(') return 0;
    }
    for(int i = (t.size() >> 1);i < t.size();i ++){
        if(t[i] != ')') return 0;
    }
    return 1;
}

void dfs(int k){
    if(k == s.size()){
        if(check()){
            ans ++;
            // cout << t << "\n";
        }
        return;
    }
    t.push_back(s[k]);
    dfs(k + 1);
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

    cin >> s;
    if(s.size() <= 20){
        dfs(0);
    }else{
        num[1] = inv[1] = 1;
        for(int i = 2;i <= 1000000;i ++){
            num[i] = (num[i - 1] * i) % mod;
            inv[i] = qpow(num[i],mod - 2);
        }
        int pos = s.find(")");
        int len = s.size() - pos;
        for(int i = 1;i <= min(pos,len);i ++){
            ans += get(pos,i) * get(len,i);
            ans %= mod;
        }
    }
    cout << ans % mod << "\n";

    return 0;
}