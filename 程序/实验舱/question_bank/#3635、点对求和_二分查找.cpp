#include<bits/stdc++.h>
using namespace std;

int n;
long long a[200005],b[200005];
long long ans = 0,sum[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&b[i]);
    }
    sort(b + 1,b + n + 1);
    for(int i = 1;i <= n;i ++){
        sum[i] = sum[i - 1] + b[i];
    }
    for(int i = 1;i <= n;i ++){
        int pos = lower_bound(b + 1,b + n + 1,a[i]) - b;
        // cout << i << " " << pos << ";;\n";
        ans += (pos - 1LL) * a[i];
        ans += sum[n] - sum[pos - 1];
    }
    printf("%lld\n",ans);

    return 0;
}