#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s1,s2;
vector<int> a,b,ans;
unordered_map<int,int> f;

void read(string &s,vector<int> &a){
    int res = 0;
    s.push_back(' ');
    for(int i = 0;i < s.size();i ++){
        if(s[i] == ' '){
            a.push_back(res);
            res = 0;
        }else{
            res = (res << 3) + (res << 1) + (s[i] ^ 48);
        }
    }
}

void putout(vector<int> &a,int s,int t){
    printf("[");
    for(int i = s;i <= t;i ++){
        if(i != s) printf(", ");
        printf("%d",a[i]);
    }
    printf("]\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin,s1);
    getline(cin,s2);
    read(s1,a);
    read(s2,b);
    for(auto && i : a) f[i] = 1;
    for(auto && i : b){
        if(!f[i]) continue;
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    putout(ans,0,ans.size() - 1);

    return 0;
}