#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int p1,p2,p3;
string s,t;

bool check(int pos){
    if(s[pos] != '-') return 0;
    if(pos == 0 || pos == s.size() - 1) return 0;
    if(s[pos - 1] >= s[pos + 1]) return 0;
    if(s[pos - 1] >= '0' && s[pos - 1] <= '9' 
    && s[pos + 1] >= '0' && s[pos + 1] <= '9') return 1;
    if(s[pos - 1] >= 'a' && s[pos - 1] <= 'z' 
    && s[pos + 1] >= 'a' && s[pos + 1] <= 'z') return 1;
    return 0;
}

int turn(int x){
    if(p1 == 3) return '*';
    if(x >= 'A' && x <= 'Z' && p1 == 1) return x + 32;
    if(x >= 'a' && x <= 'z' && p1 == 2) return x - 32;
    return x;
}

void add(int pos){
    int st = s[pos - 1],en = s[pos + 1],cur = 1;
    if(p3 == 2){
        swap(st,en);
        cur = -1;
    }
    for(int i = st + cur;i != en;i += cur){
        for(int j = 0;j < p2;j ++){
            t.push_back(turn(i));
        }
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

    while(cin >> p1 >> p2 >> p3){
        cin >> s;
        t = "";
        for(int i = 0;i < s.size();i ++){
            if(check(i)) add(i);
            else t.push_back(s[i]);
        }
        cout << t << "\n";
    }

    return 0;
}