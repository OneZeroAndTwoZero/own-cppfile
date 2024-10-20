#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int k,cnt = 0;
string a,b;

int turn(char c){
    if(c >= '0' && c <= '9') return c - '0';
    else return c - 'A' + 10;
}

int re_turn(int x){
    if(x < 10) return x + '0';
    else return x - 10 + 'A';
}

string operate(string &a,string &b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int len = max(a.size(),b.size());
    string res = "";
    while(a.size() < len) a.push_back('0');
    while(b.size() < len) b.push_back('0');
    for(int i = 0;i < len;i ++){
        res.push_back(turn(a[i]) + turn(b[i]));
    }
    res.push_back(0);
    for(int i = 0;i < len;i ++){
        res[i + 1] += res[i] / k;
        res[i] %= k;
        res[i] = re_turn(res[i]);
    }
    if(res[len] == 0) res.pop_back();
    else res[len] = re_turn(res[len]);
    reverse(res.begin(),res.end());
    return res;
}

bool check(string &s){
    int l = 0,r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l ++,r --;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k >> a;
    while(1){
        if(check(a)) break;
        cnt ++;
        b = a;
        reverse(b.begin(),b.end());
        a = operate(a,b);
        if(cnt > 30){
            cout << "Impossible!\n";
            return 0;
        }
    }
    cout << "STEP=" << cnt << "\n";

    return 0;
}