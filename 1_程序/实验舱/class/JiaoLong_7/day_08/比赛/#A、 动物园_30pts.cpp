#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,mod = 1000000007;
string s;
int num[__len(6)];

bool check(int k,int p){
    // cout << p << " " << k << ";;;\n";
    int p1 = 0,p2 = p - k + 1;
    while(p2 < p + 1){
        // cout << p1 << " " << p2 << "[][]\n";
        if(s[p1] != s[p2]) return 0;
        p1 ++,p2 ++;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T --){
        cin >> s;
        for(int i = 0;i < s.size();i ++){
            num[i] = 0;
            for(int k = (i + 1) / 2;k >= 1;k --){
                if(check(k,i)) num[i] ++;
            }
        }
        int ans = 1;
        for(int i = 0;i < s.size();i ++){
            ans = (1LL * ans * (num[i] + 1)) % mod;
        }
        cout << ans << "\n";
    }

    return 0;
}