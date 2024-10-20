#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
long long p, a, b;

long long qpow(long long a, long long b){
    long long res = 1;
    while (b){
        if (b & 1) res = (res * a) % p;
        a = (a * a) % p;
        b >>= 1;
    }
    return res;
}

void solve(){
    long long k = sqrt(p);
    unordered_map<long long, int> vis, f;
    for (int i = 0; i <= k; i ++){
        long long cur = qpow(a, p - 2);
        cur = qpow(cur, i);
        cur = (cur * b) % p;
        if(vis[cur]){
            f[cur] = min(f[cur], i);
            continue;
        }
        vis[cur] = 1, f[cur] = i;
    }
    for (int i = 0; i <= k; i ++){
        long long cur = qpow(a, i * k);
        if(!vis[cur]) continue;
        printf("%lld\n", 1LL * i * k + f[cur]);
        return;
    }
    printf("no solution\n");
}

int main(){
    scanf("%d", &T);
    while (T --){
        scanf("%lld %lld %lld", &p, &a, &b);
        solve();
    }

    return 0;
}
