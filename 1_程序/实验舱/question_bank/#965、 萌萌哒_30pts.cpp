#include<bits/stdc++.h>
using namespace std;

int f[20000007];
int n, m, cnt = 0;
int l1, r1, l2, r2;
long long ans = 9, mod = 1000000007;

void __init(){
    for (int i = 0; i <= 20000000; i ++){
        f[i] = i;
    }
}

long long qpow(int a, long long b){
    if (b == 0) return 1;
    long long res = qpow(a, b >> 1);
    res = (res * res) % mod;
    if (b & 1) res = (res * a) % mod;
    return res % mod;
}

int find(int x){
    if (f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x, int y){
    f[find(x)] = find(y);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    __init();
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i ++){
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        for (int p = l1, q = l2; p <= r1; p ++, q ++){
            merge(p, q);
        }
    }
    for (int i = 1; i <= n; i ++){
        cnt += (f[i] == i);
    }
    ans *= qpow(10, cnt - 1);
    printf("%lld\n", ans % mod);

    return 0;
}