#include<bits/stdc++.h>
using namespace std;

int t;
string s;

bool check(){
    if(s.size() == 1) return 1;
    if(s.size() == 2){
        if(s[0] == s[1]) return 0;
        return 1;
    }
    for(int i = 2;i < s.size();i ++){
        if(s[i - 2] == s[i - 1] || s[i - 1] == s[i] || s[i - 2] == s[i]){
            return 0;
        }
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

    cin >> t;
    while(t --){
        cin >> s;
        if(check()){
            printf("Random string\n");
        }else{
            printf("Not a random string\n");
        }
    }

    return 0;
}