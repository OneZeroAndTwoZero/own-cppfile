#include<bits/stdc++.h>
using namespace std;

long long d,ans = 0x3f3f3f3f3f3f3f3f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&d);
    long long pos = sqrt(d);
    for(long long i = 0;i <= pos;i ++){
        long long num = sqrt(d - i * i);
        ans = min(ans,abs(d - num * num - i * i));
        ans = min(ans,abs(d - (num + 1) * (num + 1) - i * i));
    }
    printf("%lld\n",ans);

    return 0;
}