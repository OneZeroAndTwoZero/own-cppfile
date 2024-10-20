#include<bits/stdc++.h>
using namespace std;

int x;
unordered_map<int,string> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    f[1] = "星期一";
    f[2] = "星期二";
    f[3] = "星期三";
    f[4] = "星期四";
    f[5] = "星期五";
    f[6] = "星期六";
    f[7] = "星期日";
    cin >> x;
    cout << f[x] << "\n";

    return 0;
}
