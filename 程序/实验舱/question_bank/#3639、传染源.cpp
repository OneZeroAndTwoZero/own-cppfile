#include<bits/stdc++.h>
using namespace std;

int n,cur = 0,t = 0x3f3f3f3f,ans = 0;
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
    s.push_back('0');
    for(int i = 0;i <= n;i ++){
        if(s[i] == '1'){
            cur ++;
        }else{
            if(!cur) continue;
            if(i == cur || i == n) t = min(t,cur - 1);
            else t = min(t,(cur - 1) >> 1);
            cur = 0;
        }
    }
    t = 2 * t + 1;
    for(int i = 0;i <= n;i ++){
        if(s[i] == '1'){
            cur ++;
        }else{
            if(!cur) continue;
            ans += (cur - 1) / t + 1;
            cur = 0;
        }
    }
    cout << ans << "\n";

    return 0;
}