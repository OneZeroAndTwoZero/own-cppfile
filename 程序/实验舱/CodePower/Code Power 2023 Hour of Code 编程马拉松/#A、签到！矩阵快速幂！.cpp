#include<bits/stdc++.h>
using namespace std;

long long n,mod = 100000000007;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    n %= mod;
    printf("%lld\n",(2 * n + 1) % mod);

    return 0;
}