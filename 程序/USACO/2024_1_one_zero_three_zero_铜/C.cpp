#include<bits/stdc++.h>
using namespace std;

int n;
long long a[200005],t[200005],d[200005];
long long ans = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        t[i] = a[i] - a[i - 1];
        d[i] = t[i] - t[i - 1];
        // cout << a[i] << " " << t[i] << " " << d[i] << ";;\n";
    }
    for(int i = 1;i <= n;i ++){
        t[i] = t[i - 1] + d[i];
        a[i] = a[i - 1] + t[i];
        // cout << a[i] << ";;\n";
        ans += abs(a[i]);
        d[i + 1] -= a[i];
        a[i] = 0;
        // update(i + 1,-cur);
    }
    printf("%lld\n",ans);

    return 0;
}