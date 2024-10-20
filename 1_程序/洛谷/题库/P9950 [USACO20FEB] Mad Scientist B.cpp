#include<bits/stdc++.h>
using namespace std;

string a,b;
bool p = 0;
int n,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> a >> b;
    a.push_back('0'),b.push_back('0');
    for(int i = 0;i <= n;i ++){
        if(a[i] == b[i]){
            if(p) ans ++;
            p = 0;
        }else{
            p = 1;
        }
    }
    cout << ans << "\n";

    return 0;
}