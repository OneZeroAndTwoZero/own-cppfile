#include<bits/stdc++.h>
using namespace std;

long long t,n,m;
long long d[105] = {0};

long long operate(int n){
    memset(d,0,sizeof(d));
    d[1] = 0,d[2] = 1;
    for(long long i = 3;i <= n;i++){
        d[i] = (i - 1) * (d[i - 1] + d[i - 2]);
    }
    return d[n];
}

long long mul(long long x){
    long long res = 1;
    while(x){
        res *= x;
        x --;
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

    scanf("%lld",&t);
    while(t --){
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",operate(m) * (mul(n) / (mul(m) * mul(n - m))));
    }

    return 0;
}