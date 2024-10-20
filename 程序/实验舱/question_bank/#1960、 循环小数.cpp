#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long n;
int point,pla;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    point = s.find(".");
    pla = s.find("(");
    if(n <= pla - point - 1){
        cout << s[point + n] << "\n";
        return 0;
    }
    n -= (pla - point - 1);
    n %= (s.size() - pla - 2);
    if(n == 0) n = s.size() - pla - 2;
    cout << s[pla + n] << "\n";

    return 0;
}