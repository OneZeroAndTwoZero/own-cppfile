#include<bits/stdc++.h>
using namespace std;

long long n,ans = 0;
long long l = 1,k,r;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%lld",&n);
    while(l <= n){
        k = n / l;
        r = n / k;
        ans += (r - l + 1) * (n / l);
        l = r + 1;
    }
    printf("%lld\n",ans);

    return 0;
}
