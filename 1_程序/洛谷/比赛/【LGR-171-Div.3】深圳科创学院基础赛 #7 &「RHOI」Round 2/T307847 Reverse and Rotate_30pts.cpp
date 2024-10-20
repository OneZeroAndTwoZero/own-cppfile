#include<bits/stdc++.h>
using namespace std;

string s,op;
int n,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> n;
    while(n --){
        cin >> op;
        if(op == "rev"){
            reverse(s.begin(),s.end());
        }else if(op == "<"){
            cin >> x;
            x %= s.size();
            string res = s;
            for(int i = 0;i < s.size();i ++){
                res[(i - x + s.size()) % s.size()] = s[i];
            }
            s = res;
        }else{
            cin >> x;
            x %= s.size();
            string res = s;
            for(int i = 0;i < s.size();i ++){
                res[(i + x) % s.size()] = s[i];
            }
            s = res;
        }
    }
    cout << s << "\n";

    return 0;
}