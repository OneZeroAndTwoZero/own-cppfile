#include<bits/stdc++.h>
using namespace std;

string s,ans;
int t,minn = 0x3f3f3f3f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> s >> t){
        if(t >= minn) continue;
        minn = t;
        ans = s;
    }
    cout << ans << "\n";

    return 0;
}