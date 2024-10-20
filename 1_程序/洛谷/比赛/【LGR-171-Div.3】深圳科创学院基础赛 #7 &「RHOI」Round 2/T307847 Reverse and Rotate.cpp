#include<bits/stdc++.h>
using namespace std;

string s,res,op;
int n,f;
long long x,pos;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> n;
    f = 1,pos = 0;
    while(n --){
        cin >> op;
        if(op == "rev"){
            f *= -1,pos *= -1;
        }else if(op == "<"){
            cin >> x;
            pos -= x;
        }else{
            cin >> x;
            pos += x;
        }
    }
    while(pos < 0) pos += s.size();
    pos %= s.size();
    if(f == -1) reverse(s.begin(),s.end());
    res = s;
    for(int i = 0;i < s.size();i ++){
        res[(i + pos) % s.size()] = s[i];
    }
    cout << res << "\n";

    return 0;
}