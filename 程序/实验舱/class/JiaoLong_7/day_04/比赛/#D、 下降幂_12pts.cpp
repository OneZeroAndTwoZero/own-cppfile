#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long l,r,m,p;
long long cur = 1,ans = 0;
long long inv[10000007];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld %lld",&l,&r,&m,&p);
    if(r <= 1000 && m <= 1000){
        for(long long i = l;i <= r;i ++){
            long long cur = 1;
            for(long long k = i;k >= i - m + 1;k --){
                cur *= k;
                cur %= p;
            }
            ans = (ans + cur) % p;
        }
    }else{
        inv[1] = 1;
        for(int i = 2;i <= r;i ++){
            inv[i] = ((p - (p / i)) * inv[p % i]) % p;
        }
        l = max(m,l);
        for(long long i = l;i >= l - m + 1;i --){
            cur *= i;
            cur %= p;
        }
        for(long long i = l;i <= r;i ++){
            ans = (ans + cur) % p;
            cur = (cur * inv[i - m + 1]) % p;
            cur = (cur * (i + 1)) % p;
        }
    }
    printf("%lld\n",ans % p);

    return 0;
}