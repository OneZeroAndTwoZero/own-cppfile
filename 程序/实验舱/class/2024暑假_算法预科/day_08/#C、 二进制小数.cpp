#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
string s;

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
        bool ans = 1;
        while(s.back() != '.'){
            if((s.back() - '0') != 5){
                ans = 0;
                break;
            }
            for(int i = s.size() - 1;i >= 2;i --){
                s[i] = (s[i] - '0') * 2;
            }
            for(int i = s.size() - 1;i >= 2;i --){
                if(i != 2) s[i - 1] += (s[i] / 10);
                s[i] %= 10;
                s[i] = s[i] + '0';
            }
            s.pop_back();
            // cout << s << "[][]\n";
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}