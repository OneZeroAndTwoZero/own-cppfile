#include<bits/stdc++.h>
using namespace std;

string s;
string checks[2] = {"Genshin","player"};
int l[2] = {7,6};
int ans = 0;

bool check(int st,int ty){
    string t = "";
    for(int i = st;i < st + l[ty];i ++){
        t.push_back(s[i]);
    }
    return t == checks[ty];
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
    for(int i = 0;i + 6 < s.size();i ++){
        for(int j = i + 6;j + 5 < s.size();j ++){
            if(check(i,0) && check(j,1)) ans ++;
        }
    }
    printf("%d\n",ans);

    return 0;
}