#include<bits/stdc++.h>
using namespace std;

int m, n, k, ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &m, &n, &k);
    for (int i = 0; i <= k; i ++){
        int tm = m - i, tn = n - (k - i);
        if (tm < 0 || tn < 0) continue;
        ans = max(ans, min(tm / 2, tn));
    }
    printf("%d\n", ans);

    return 0;
}