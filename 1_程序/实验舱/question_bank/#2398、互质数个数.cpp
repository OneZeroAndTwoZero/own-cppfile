#include<bits/stdc++.h>
using namespace std;

long long n;

long long Euler(long long n) {
    long long res = n;
    for(long long i = 2;i <= n / i;i ++){
        if(n % i) continue;
        res = res / i * (i - 1);
        while(n % i == 0){
            n /= i;
        }
    }
    if(n > 1) res = res / n * (n - 1);
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

    scanf("%lld",&n);
    printf("%lld\n",Euler(n));

    return 0;
}