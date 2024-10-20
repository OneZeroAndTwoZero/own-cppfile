#include<bits/stdc++.h>
using namespace std;

long long n,cur,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long k = 1;cur <= n;k ++){
        cur = k * (k + 1) / 2LL;
        if(cur >= n) break;
        if((n - cur) % (k + 1) == 0) ans ++;
    }
    printf("%lld\n",ans);

    return 0;
}