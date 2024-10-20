#include<bits/stdc++.h>
using namespace std;

long long h, w, r, c;
int ans = 4;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld %lld", &h, &w, &r, &c);
    if (r == h) ans --;
    if (c == w) ans --;
    if (r == 1) ans --;
    if (c == 1) ans --;
    printf("%d\n", ans);

    return 0;
}