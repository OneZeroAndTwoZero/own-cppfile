#include<bits/stdc++.h>
using namespace std;

long long n;
__int128 num,ans,power = 1,mod = 998244353;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    ans = n,num = n;
    ans = ans * (ans + 1) / 2;
    while(power <= num){
        power *= 10LL;
        ans -= (min(power - 1,num) - (power / 10 - 1)) * (power / 10 - 1);
    }
    ans = ans % mod;
    n = ans;
    printf("%lld\n",n);

    return 0;
}