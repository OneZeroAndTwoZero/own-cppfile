#include<bits/stdc++.h>
using namespace std;

int T,x,y,k;
int a;
long long ans,mod = 1000000007,num[10005],inv[10005];

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

    num[1] = inv[1] = 1;
    for(int i = 2;i <= 10000;i ++){
        num[i] = (num[i - 1] * i) % mod;
        inv[i] = qpow(num[i],mod - 2);
    }
    scanf("%d",&T);
    while(T --){
        scanf("%d %d %d",&x,&y,&k);
        a = abs(x - y);
        if(k < a || ((k - a) & 1)){
            printf("0\n");
        }else if(a == k){
            printf("1\n");
        }else{
            a += ((k - a) >> 1);
            ans = ((num[k] * inv[a]) % mod) * inv[k - a];
            printf("%lld\n",ans % mod);
        }
    }

    return 0;
}