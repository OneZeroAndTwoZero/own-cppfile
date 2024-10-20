#include<bits/stdc++.h>
using namespace std;

int n, ans = -0x3f3f3f3f;
int temp[1000006], a[1000006];
int dp[1000006];

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
        scanf("%d", &temp[i]);
    }
    for(int i = 1; i * 2 <= n; i ++){
        a[i] = temp[i] + temp[n - i + 1];
    }
    n >>= 1;
    for (int i = 1; i <= n; i ++){
        dp[i] = max(dp[i - 1], 0) + a[i];
        ans = max(dp[i], ans);
    }
    printf("%d\n", ans);

    return 0;
}