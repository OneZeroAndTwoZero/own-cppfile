#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
int n, k;
long long ans = 0;
int a[200005];
long long sum[2][200005];
map<int, int> mp;
vector<int> f[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &T);
    while (T --){
        ans = 0;
        mp.clear();
        scanf("%d %d", &n, &k);
        int cid = 0;
        for (int i = 0; i <= n; i ++){
            f[i].clear();
        }
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
            mp[a[i] % k] = ++ cid;
        }
        for (int i = 0; i < n; i ++){
            f[mp[a[i] % k]].push_back((a[i] - (a[i] % k)) / k);
        }
        int maxn = (n & 1), cnt = 0, id = -114514;
        for (int i = 0; i <= n; i ++){
            if (f[i].size() == 0) continue;
            // cout << f[i].size() << ";;\n";
            if (f[i].size() & 1){
                cnt ++;
                id = i;
            }
        }
        if (cnt > maxn){
            printf("-1\n");
            continue;
        }
        for (int i = 0; i <= n; i ++){
            if (f[i].size() == 0) continue;
            sort(f[i].begin(), f[i].end());
            if (i != id){
                for (int j = 1; j < f[i].size(); j += 2){
                    ans += f[i][j] - f[i][j - 1];
                }
                continue;
            }
            for (int j = 0; j <= f[i].size() + 5; j ++){
                sum[0][j] = sum[1][j] = 0;
            }
            for (int j = 2; j <= f[i].size(); j += 2){
                sum[0][j] = sum[0][j - 2] + (f[i][j - 1] - f[i][j - 2]);
            }
            for (int j = f[i].size() - 1; j >= 1; j -= 2){
                sum[1][j] = sum[1][j + 2] + (f[i][j] - f[i][j - 1]);
            }
            long long cur = 0x3f3f3f3f3f3f3f3f;
            for (int j = 1; j <= f[i].size(); j += 2){
                cur = min(cur, sum[0][j - 1] + sum[1][j + 1]);
            }
            ans += cur;
        }
        printf("%lld\n", ans);
    }

    return 0;
}