#include<bits/stdc++.h>
using namespace std;

int n, m, k;
long long a[505][505], sum[505], ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            scanf("%lld", &a[i][j]);
            a[i][j] += a[i][j - 1];
        }
    }
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            scanf("%lld", &a[i][j]);
            a[i][j] += a[i - 1][j];
        }
    }
    for (int l = 1; l <= n; l ++){
        for (int r = l; r <= n; r ++){
            for (int i = 1; i <= n; i ++){
                sum[i] = a[r][i] - a[l - 1][i];
            }
            unordered_map<long long, long long> f;
            f[0] = 1;
            for (int i = 1; i <= n; i ++){
                ans += f[sum[i] - k];
                f[sum[i]] ++;
            }
        }
    }
    printf("%lld\n", ans);

    return 0;
}