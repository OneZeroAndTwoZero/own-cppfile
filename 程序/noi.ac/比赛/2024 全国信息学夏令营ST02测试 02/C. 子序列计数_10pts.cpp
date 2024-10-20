#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int n, k;
int a[100005];
long long C[100005][15];
long long dp[100005][15];
long long ans = 0, mod = 1000000007;

void add(int ty, int id, int val){
    for (int i = id; i <= n; i += lowbit(i)){
        C[ty][i] += val;
        C[ty][i] %= mod;
    }
}

int query(int ty, int id){
    int res = 0;
    for (int i = id; i; i -= lowbit(i)){
        res += C[ty][i];
        res %= mod;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &n, &k);
    k ++;
    for (int i = 1; i <= n; i ++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i ++){
        dp[i][1] = 1;
        add(1, a[i], 1);
        for (int j = 2; j <= k; j ++){
            dp[i][j] = query(j - 1, a[i] - 1) % mod;
            add(j, a[i], dp[i][j]);
            // for (int t = 1; t < i; t ++){
            //     if(a[t] < a[i]){
            //         dp[i][j] += dp[t][j - 1];
            //         dp[i][j] %= mod;
            //     }
            // }
        }
        ans += dp[i][k];
        ans %= mod;
    }
    printf("%lld\n", ans);

    return 0;
}