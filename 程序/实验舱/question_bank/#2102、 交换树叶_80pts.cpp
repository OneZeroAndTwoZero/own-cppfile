#include<bits/stdc++.h>
using namespace std;

int n, minn, ans = 10000007;
string s;
int sum[600005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    n = s.size();
    for (int i = 1; i <= n; i ++){
        sum[i] = (s[i - 1] == 'y');
        sum[i] += sum[i - 1];
    }
    minn = sum[1] + (3 - 2 - (sum[3 - 1] - sum[2 - 1]));
    for (int i = 3; i <= n; i ++){
        ans = min(ans,minn + (sum[n] - sum[i - 1]));
        minn = min(minn + ((sum[i] - sum[i - 1]) == 0)
                ,sum[i - 2] + ((sum[i - 1] - sum[i - 2]) == 0));
    }
    cout << ans << "\n";

    return 0;
}