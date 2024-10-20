#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
long long n;
long long maxn[__len(6)];

long long get_(int x){
    long long res = 1;
    while(x){
        res *= (x % 10);
        x /= 10;
    }
    return res;
}

long long operate(long long x){
    if(x == 0) return 1;
    if(x <= 1000000) return maxn[x];
    long long res = (x % 10) * operate(x / 10);
    if(x / 10 > 0 && x % 10 != 9) res = max(9LL * operate((x / 10) - 1),res);
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

    scanf("%d",&T);
    for(int i = 1;i <= 1000000;i ++){
        maxn[i] = max(maxn[i - 1],get_(i));
    }
    while(T --){
        scanf("%lld",&n);
        printf("%lld\n",operate(n));
    }

    return 0;
}