#include<bits/stdc++.h>
using namespace std;

long long n,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    for(long long i = 1;i * i <= n;i ++){
        if(n % (i * i) != 0) continue;
        ans = i * i;
    }
    printf("%lld\n",ans);

    return 0;
}