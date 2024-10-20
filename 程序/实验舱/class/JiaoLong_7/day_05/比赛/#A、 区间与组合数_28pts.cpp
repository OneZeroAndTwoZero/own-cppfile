#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m;
int l,r,k;
long long a[1000006];
long long ans,mod = 1000000007;
long long num[1000006],inv[1000006];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
}

long long getC(int a,int b){
    long long res = 0;
    if(a < b){
        return 0LL;
    }else if(a == b){
        return 1LL;
    }else{
        res = ((num[a] * inv[b]) % mod) * inv[a - b];
        return res % mod;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    inv[0] = num[1] = inv[1] = 1;
    for(int i = 2;i <= 1000000;i ++){
        num[i] = (num[i - 1] * i) % mod;
        inv[i] = qpow(num[i],mod - 2);
    }
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    while(m --){
        scanf("%d %d %d",&l,&r,&k);
        for(int i = l;i <= r;i ++){
            a[i] += getC(k + i - l,k);
            a[i] %= mod;
        }
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld%c",a[i]," \n"[i == n]);
    }

    return 0;
}