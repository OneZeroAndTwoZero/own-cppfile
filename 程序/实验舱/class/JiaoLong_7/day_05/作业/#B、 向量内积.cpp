#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long ans = 0;
long long a[100005],b[100005];

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
        scanf("%lld",&b[i]);
    }
    for(int i = 0;i < n;i ++){
        ans += a[i] * b[i];
    }
    printf("%lld\n",ans);

    return 0;
}