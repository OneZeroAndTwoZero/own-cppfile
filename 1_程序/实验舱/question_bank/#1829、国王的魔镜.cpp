#include<bits/stdc++.h>
using namespace std;

string s;

int operate(int l,int r){
    int n = r - l + 1;
    if((n & 1) || n == 1) return n;
    int le = l,ri = r;
    while(le <= ri){
        if(s[le] != s[ri]) return n;
        le ++ ,ri --;
    }
    return operate(l,l + (n >> 1) - 1);
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
    cout << operate(0,s.size() - 1);

    return 0;
}