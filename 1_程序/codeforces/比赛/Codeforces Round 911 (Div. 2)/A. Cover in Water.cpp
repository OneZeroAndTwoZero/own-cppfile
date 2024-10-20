#include<bits/stdc++.h>
using namespace std;

int t,n,ans;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while(t --){
        cin >> n >> s;
        ans = 0;
        s.push_back('#');
        int cnt = 0,now = 0;
        for(int i = 0;i < s.size();i ++){
            if(s[i] == '.'){
                now ++;
            }else{
                ans += now;
                now = 0;
            }
            cnt = max(cnt,now);
        }
        if(cnt >= 3) ans = 2;
        cout << ans << "\n";
    }

    return 0;
}