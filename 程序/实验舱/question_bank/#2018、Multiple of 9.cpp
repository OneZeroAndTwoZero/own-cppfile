#include<bits/stdc++.h>
using namespace std;

int t,sum,n;
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
        cin >> s;
        sum = 0,n = s.size();
        for(int i = 0;i < s.size();i ++){
            sum += (s[i] ^ '0');
        }
        if(sum % 9 == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}