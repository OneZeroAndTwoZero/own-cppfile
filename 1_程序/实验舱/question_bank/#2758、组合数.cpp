#include<bits/stdc++.h>
using namespace std;

int n,a,b;
long long ans,mod = 1000000007,num[100005],inv[100005];

long long qpow(long long a,long long b){
    if(b == 0) return 1;
    long long res = qpow(a,b >> 1);
    res = (res * res) % mod;
    if(b & 1) res *= a;
    return res % mod;
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
    for(int i = 2;i <= 100000;i ++){
        num[i] = (num[i - 1] * i) % mod;
        inv[i] = qpow(num[i],mod - 2);
    }
    scanf("%d",&n);
    while(n --){
        scanf("%d %d",&a,&b);
        if(a < b){
            printf("0\n");
        }else if(a == b){
            printf("1\n");
        }else{
            ans = ((num[a] * inv[b]) % mod) * inv[a - b];
            printf("%lld\n",ans % mod);
        }
    }

    return 0;
}