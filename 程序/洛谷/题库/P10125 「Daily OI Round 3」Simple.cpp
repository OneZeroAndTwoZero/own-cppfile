#include<bits/stdc++.h>
using namespace std;

string s;

string solve(string s){
    string res = "";
    for(auto && i : s){
        if(i >= 'A' && i <= 'Z'){
            res.push_back(i + 32);
        }else{
            res.push_back(i);
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

    cin >> s;
    if(solve(s) == solve("ACoiPP")){
        printf("Luogu\n");
    }else if(solve(s) == solve("SVPOLL")){
        printf("Genshin\n");
    }else{
        printf("Boring\n");
    }

    return 0;
}