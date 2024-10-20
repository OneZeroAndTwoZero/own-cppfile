#include<bits/stdc++.h>
using namespace std;

long long n,ans,mod = 1000000007;

long long operate(long long x){
    long long res = x,t = 0;
    while(x){
        res *= 10;
        t = t * 10 + (x % 10);
        x /= 10;
    }
    return res + t;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    while(n){
        ans = (ans + operate(n)) % mod;
        n --;
    }
    printf("%lld\n",ans);

    return 0;
}