#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n ,cnt = 0;
long long a[100005], ans[100005];
long long d[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
        d[i] = a[i] - a[i - 1];
    }
    sort(d + 2, d + n + 1, greater<int>());
    for (int i = 1; i <= n; i ++){
        ans[i] = ans[i - 1] + d[i];
        cnt += (ans[i] != a[i]);
    }
    printf("%d\n", cnt);
    for (int i = 1; i <= n; i ++){
        printf("%d%c", ans[i], " \n"[i == n]);
    }

    return 0;
}