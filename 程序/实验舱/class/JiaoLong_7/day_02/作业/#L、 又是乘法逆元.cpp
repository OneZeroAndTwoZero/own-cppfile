#include<bits/stdc++.h>
using namespace std;

int n;
long long a[10000005];
long long sum[10000005];
long long mod = 1000000007;
long long pown[10000007];
long long ans = 0;

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
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
    
    scanf("%d",&n);
    sum[0] = 1;
    pown[0] = 1;
    for(int i = 1;i <= n;i ++){
        pown[i] = (pown[i - 1] * 998244353LL) % mod;
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        sum[i] = (sum[i - 1] * a[i]) % mod;
    }
    long long cur = qpow(sum[n],mod - 2);
    for(int i = n;i > 0;i --){
        // cout << (cur * sum[i - 1]) % mod << " " << n - i << ";;\n";
        ans += (((cur * sum[i - 1]) % mod) * pown[n - i]) % mod;
        ans %= mod;
        cur = (cur * a[i]) % mod;
    }
    printf("%lld\n",ans);

    return 0;
}
