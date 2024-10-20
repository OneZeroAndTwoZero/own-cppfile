#include<bits/stdc++.h>
using namespace std;

string s;
int cur = 0;

char turn(int x){
    if(x < 10) return x + '0';
    else return x - 10 + 'A';
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
    for(int i = 0;i < s.size();i ++){
        if(cur * 10 + (s[i] - '0') < 16){
            cur = cur * 10 + (s[i] - '0');
        }else{
            cout << turn(cur);
            cur = s[i] - '0';
        }
    }
    cout << turn(cur) << '\n';

    return 0;
}