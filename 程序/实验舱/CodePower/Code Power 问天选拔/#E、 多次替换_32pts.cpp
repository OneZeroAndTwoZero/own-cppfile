#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,q;
string s;
char c,d;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s >> q;
    while(q --){
        cin >> c >> d;
        for(auto && i : s){
            if(i == c) i = d;
        }
    }
    cout << s << "\n";

    return 0;
}