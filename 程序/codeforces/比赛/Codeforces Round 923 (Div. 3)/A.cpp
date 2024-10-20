#include<bits/stdc++.h>
using namespace std;

int T;
int n,l,r;
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
        cin >> n >> s;
        l = -1,r = -10;
        for(int i = 0;i < n;i ++){
            if(s[i] != 'B') continue;
            if(l == -1) l = i;
            r = i;
        }
        cout << max(0,r - l + 1) << "\n";
    }

    return 0;
}