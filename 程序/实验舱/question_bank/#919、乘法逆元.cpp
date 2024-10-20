#include<bits/stdc++.h>
using namespace std;

long long n,p;
long long inv[3000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&n,&p);
    inv[1] = 1;
    for(int i = 2;i <= n;i ++){
        inv[i] = ((p - (p / i)) * inv[p % i]) % p;
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld\n",inv[i]);
    }

    return 0;
}