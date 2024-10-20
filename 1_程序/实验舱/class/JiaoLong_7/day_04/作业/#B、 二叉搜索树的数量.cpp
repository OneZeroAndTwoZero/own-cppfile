#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long mod = 10007,cat[1005] = {1,1};

long long operate(int n){
    if(cat[n] != 0) return cat[n];
    long long res = 0;
    for(int k = 1;k <= n;k ++){
        res += operate(k - 1) * operate(n - k);
        res %= mod;
    }
    cat[n] = res % mod;
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

    scanf("%d",&n);
    printf("%lld\n",operate(n) % mod);

    return 0;
}