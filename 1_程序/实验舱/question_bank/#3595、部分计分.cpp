#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long i = 2;i <= n;i ++){
        if(n % i) continue;
        printf("%lld %lld\n",i,n / i);
        return 0;
    }

    return 0;
}