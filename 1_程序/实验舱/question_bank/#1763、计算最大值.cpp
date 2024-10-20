#include<bits/stdc++.h>
using namespace std;

string s;
long long ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    ans = s[0] ^ 48;
    for(int i = 1;i < s.size();i ++){
        if(s[i] <= '1' || ans <= 1LL){
            ans += (s[i] ^ 48);
        }else{
            ans *= (s[i] ^ 48);
        }
    }
    printf("%lld\n",ans);

    return 0;
}