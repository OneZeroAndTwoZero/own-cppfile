#include<bits/stdc++.h>
using namespace std;

long long n,k,ans = 0;
int q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %d",&n,&q);
    while(q --){
        scanf("%lld",&k);
        if(n & (1LL << (k - 1))) continue;
        long long res = (1LL << (k - 1)) - (n % (1LL << (k - 1)));
        ans += res;
        n += res;
    }
    printf("%lld\n",ans);

    return 0;
}