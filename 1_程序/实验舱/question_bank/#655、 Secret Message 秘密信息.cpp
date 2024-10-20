#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int t[500005][131], cnt[500005];
int sum[500005];
int pos = 1;
int n, m, l;
char ch;

void add(string &s){
    int p = 1;
    for (int i = 0; i < s.size(); i ++){
        if (!t[p][s[i]]){
            t[p][s[i]] = ++ pos;
        }
        p = t[p][s[i]];
    }
    cnt[p] ++;
}

int erg(int p){
    if (p == 0) return 0;
    sum[p] = cnt[p];
    for (int i = 0; i <= 128; i ++){
        if (!t[p][i]) continue;
        sum[p] += erg(t[p][i]);
    }
    return sum[p];
}

int query(string &s){
    int p = 1, res = 0;
    for (int i = 0; i < s.size(); i ++){
        res += cnt[p];
        if (!t[p][s[i]]) return res;
        p = t[p][s[i]];
    }
    res = res + sum[p];
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

    cin >> n >> m;
    while (n --){
        cin >> l;
        string s = "";
        while (l --){
            cin >> ch;
            s.push_back(ch);
        }
        add(s);
    }
    erg(1);
    while (m --){
        cin >> l;
        string s = "";
        while (l --){
            cin >> ch;
            s.push_back(ch);
        }
        printf("%d\n", query(s));
    }

    return 0;
}