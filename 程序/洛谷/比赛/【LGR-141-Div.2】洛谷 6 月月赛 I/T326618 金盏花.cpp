#include<bits/stdc++.h>
using namespace std;

long long y,z,ans = 1e18;

int main(){
    scanf("%lld %lld",&y,&z);
    for(long long i = 100000;i <= 999999;i ++){
        long long x = i * 1e6 + y;
        ans = min(ans,abs(x - z));
    }
    printf("%lld\n",ans);

    return 0;
}