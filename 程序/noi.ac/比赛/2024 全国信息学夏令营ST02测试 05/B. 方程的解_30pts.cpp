#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
long long p, a, b;

void solve(){
    long long cur = 1;
    int res = 0;
    for (; cur != b && res <= p + 2; res ++){
        cur = (cur * a) % p;
    }
    if (cur == b) printf("%d\n", res);
    else printf("no solution\n");
}

int main(){
    scanf("%d", &T);
    while (T --){
        scanf("%lld %lld %lld", &p, &a, &b);
        solve();
    }

    return 0;
}
