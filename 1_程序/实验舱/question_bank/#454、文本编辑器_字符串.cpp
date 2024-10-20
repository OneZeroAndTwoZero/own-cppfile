#include<bits/stdc++.h>
using namespace std;

char ch;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);
    // cout.tie(NULL);

    while(~scanf("%c",&ch)){
        if(ch == '@'){
            if(s.size())
                s.pop_back();
        }else if(ch == '#'){
            s = "";
        }else{
            s = s + ch;
        }
    }
    cout << s;

    return 0;
}