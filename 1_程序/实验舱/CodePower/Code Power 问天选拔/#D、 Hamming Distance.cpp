#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

unsigned long long x,y;
int ans = 0;
string s1 = "",s2 = "";

void operate(unsigned long long a,string &s){
    for(int i = 0;i < 70;i ++){
        s.push_back((a % 2) + '0');
        a /= 2;
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

    cin >> x >> y;
    operate(x,s1);
    operate(y,s2);
    for(int i = 0;i < 70;i ++){
        ans += 1 - (s1[i] == s2[i]);
    }
    cout << ans << "\n";

    return 0;
}