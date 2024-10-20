#include<bits/stdc++.h>
using namespace std;

long long n,l = 1,r,ans;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    r = n;
    while(l <= r){
        long long mid = (l + r) >> 1;
        cout << mid << "\n";
        cout << flush;
        cin >> s;
        if(s == "<"){
            r = mid - 1;
        }else{
            ans = mid;
            l = mid + 1;
        }
    }
    cout << "! " << ans << "\n";

    return 0;
}