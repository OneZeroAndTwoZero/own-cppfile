#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int t[__len(7)][3];
int cnt[__len(7)];
int q,pos = 0;
long long x;
char op;

string turnstring(long long x){
    string res = "";
    while(x){
        res.push_back((x % 2) + '0');
        x /= 2;
    }
    while(res.size() < 33) res.push_back('0');
    reverse(res.begin(),res.end());
    return res;
}

void insert(string s){
    int p = 0;
    vector<int> vis;
    vis.push_back(0);
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - '0';
        if(!t[p][val]) t[p][val] = ++pos;
        p = t[p][val];
        vis.push_back(p);
    }
    for(auto && i : vis){
        cnt[i] ++;
    }
}

long long turnint(string s){
    long long res = 0;
    for(auto && i : s){
        res = (res << 1LL) + (i ^ '0');
    }
    return res;
}

void erase(string s){
    int p = 0;
    vector<int> vis;
    vis.push_back(0);
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - '0';
        p = t[p][val];
        vis.push_back(p);
    }
    for(int i = 0;i < vis.size();i ++){
        cnt[vis[i]] --;
        if(cnt[vis[i]]) continue;
        if(t[vis[i - 1]][0] == vis[i])
            t[vis[i - 1]][0] = 0;
        if(t[vis[i - 1]][1] == vis[i])
            t[vis[i - 1]][1] = 0;
    }
}

string findmaxxor(string s){
    string res = "";
    int p = 0;
    for(int i = 0;i < s.size();i ++){
        int val = 1 - (s[i] - '0');
        if(t[p][val]){
            res.push_back(val + '0');
            p = t[p][val];
        }else{
            res.push_back((1 - val) + '0');
            p = t[p][1 - val];
        }
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

    cin >> q;
    insert("000000000000000000000000000000000");
    while(q --){
        cin >> op >> x;
        // cout << x << " " << turnstring(x) << "\n";
        if(op == '+') insert(turnstring(x));
        else if(op == '-') erase(turnstring(x));
        else cout << (x ^ turnint(findmaxxor(turnstring(x)))) << "\n";
        // cout << op << " " << x << "[][]\n";
    }

    return 0;
}