#include<bits/stdc++.h>
using namespace std;

string s;
long long cur = 0, check = 0;

long long qpow(int a, int b){
    if (b == 0) return 1;
    long long res = qpow(a, b >> 1);
    res *= res;
    if (b & 1) res *= a;
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
    for (auto && i : s){
        check = (check << 3) + (check << 1) + (i ^ 48);
        cur += qpow(i - '0', s.size());
    }
    if (cur == check) printf("Yes\n");
    else printf("No\n");

    return 0;
}