#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;
int a[100005], b[100005], c[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for (int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i ++){
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i ++){
        scanf("%d", &c[i]);
    }
    sort(a, a + n);
    sort(c, c + n);
    for (int i = 0; i < n;i ++){
        int posa = lower_bound(a, a + n, b[i]) - a;
        int posc = c + n - upper_bound(c, c + n, b[i]);
        ans += 1LL * posa * posc;
    }
    printf("%lld\n", ans);

    return 0;
}