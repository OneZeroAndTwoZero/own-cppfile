#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

string s1,s2;
int cnt1[131],cnt2[131];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin >> s1 >> s2){
        bool ans = 1;
        memset(cnt1,0,sizeof(cnt1));
        memset(cnt2,0,sizeof(cnt2));
        for(auto && i : s1) cnt1[i] ++;
        for(auto && i : s2) cnt2[i] ++;
        sort(cnt1,cnt1 + 130);
        sort(cnt2,cnt2 + 130);
        for(int i = 0;i < 130;i ++){
            if(cnt1[i] == cnt2[i]) continue;
            ans = 0;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}