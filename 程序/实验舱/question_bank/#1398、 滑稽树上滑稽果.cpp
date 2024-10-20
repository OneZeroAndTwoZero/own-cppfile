#include<bits/stdc++.h>
using namespace std;

int k, n;
long long a[1000006], ans = -0x3f3f3f3f3f3f3f3f, mod = 998244353;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    for (int i = k; i <= n; i ++){
        ans = max(ans, a[i] - a[i - k]);
    }
    ans = ((ans % mod) + mod) % mod;
    printf("%lld\n", ans);

    return 0;
}