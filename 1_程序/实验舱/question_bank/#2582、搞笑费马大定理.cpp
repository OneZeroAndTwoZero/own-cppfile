#include<bits/stdc++.h>
using namespace std;

long long x,y,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&x,&y);
    for(long long a = x;a <= min(y,1001LL);a ++){
        for(long long b = x;b <= min(y,1001LL);b ++){
            long long cur = a * a * a + b * b * b;
            if(cur % 10 != 3) continue;
            cur /= 10;
            if(cur >= x && cur <= y) ans ++;
        }
    }
    printf("%lld\n",ans);

    return 0;
}