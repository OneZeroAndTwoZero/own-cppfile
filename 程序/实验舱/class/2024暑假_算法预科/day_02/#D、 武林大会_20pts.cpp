#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
long long ans,a[__len(5)],mod = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        for(int j = i + 1;j < n;j ++){
            ans += (a[i] - a[j]) * (a[i] - a[j]);
            ans %= mod;
        }
    }
    printf("%lld\n",ans);

    return 0;
}