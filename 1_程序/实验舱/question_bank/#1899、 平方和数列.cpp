#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        ans += 1LL * i * i;
    }
    printf("%lld\n", ans);

    return 0;
}