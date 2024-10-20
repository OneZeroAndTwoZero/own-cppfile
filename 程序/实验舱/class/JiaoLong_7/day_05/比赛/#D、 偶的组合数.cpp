#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define lowbit(x) (((((((((((((((x & -x)))))))))))))))
using namespace std;

long long n,t,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    t = n;
    while(n){
        n -= lowbit(n);
        ans ++;
    }
    ans = 1LL << ans;
    ans = (t + 1) - ans;
    if(ans & 1) printf("odd\n");
    else printf("even\n");
    printf("%lld\n",ans);

    return 0;
}