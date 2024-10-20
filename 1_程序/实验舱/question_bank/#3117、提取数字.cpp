#include<bits/stdc++.h>
using namespace std;

int n;
bool p;
string s,t;
vector<int> num;

int turn(string &s){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
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

    getline(cin,s);
    n = turn(s);
    while(n --){
        getline(cin,s);
        s.push_back(' ');
        t = "";
        num.clear();
        for(int i = 0;i < s.size();i ++){
            if(s[i] == ' '){
                if(t != "" && t[0] >= '0' && t[0] <= '9')
                    num.push_back(turn(t));
                t = "";
            }else{
                t.push_back(s[i]);
            }
        }
        p = 1;
        for(int i = 1;i < num.size();i ++){
            if(num[i] <= num[i - 1]) p = 0;
        }
        if(p) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}