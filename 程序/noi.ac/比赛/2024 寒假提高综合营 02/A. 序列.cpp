#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[200005];
long long ans,mod = 1000000007;
long long num[200005];
long long inv[200005];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
}

long long getans(long long a,long long b){
    if(a == 0) return 1;
    return (((num[a] * inv[b]) % mod) * inv[a - b]) % mod;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    inv[0] = num[1] = inv[1] = 1;
    for(int i = 2;i <= n;i ++){
        num[i] = (num[i - 1] * i) % mod;
        inv[i] = qpow(num[i],mod - 2);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        // cout << i << " " << a[i] - 1 << "\n";
        if(i < a[i] - 1) continue;
        long long res = getans(i,a[i] - 1);
        res = (res * qpow(2,n - i - 1)) % mod;
        // cout << res << "[]\n";
        ans = (ans + res) % mod;
    }
    printf("%lld\n",ans);

    return 0;
}