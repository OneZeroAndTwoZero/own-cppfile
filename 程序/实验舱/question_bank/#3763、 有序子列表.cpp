#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s1,s2;
vector<int> a,b;
int pos1 = 0,pos2 = 0;

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
    while(pos2 < b.size()){
        while(pos1 < a.size() && a[pos1] != b[pos2]){
            pos1 ++;
        }
        if(pos1 >= a.size()){
            printf("False\n");
            return 0;
        }
        pos2 ++;
    }
    printf("True\n");

    return 0;
}