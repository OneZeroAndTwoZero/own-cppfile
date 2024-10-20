#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long m,a,b,ans = 1LL;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&m,&a,&b);
    while(b --){
        ans *= a;
        ans %= m;
    }
    if(ans == 0) ans = m;
    printf("%lld\n",ans);

    return 0;
}