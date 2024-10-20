#include<bits/stdc++.h>
using namespace std;

string s;
int n;

int operate(string &s, int x){
    int res = 0;
    for (auto && i : s){
        res = (res << 3) + (res << 1) + (i ^ 48);
        res %= x;
    }
    if (!res) res = n;
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

    cin >> n >> s;
    cout << operate(s, n) << "\n";

    return 0;
}