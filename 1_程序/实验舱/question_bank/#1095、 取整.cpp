#include<bits/stdc++.h>
using namespace std;

long long x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld", &x);
    while (x % 10 != 0) x --;
    printf("%lld\n", x / 10);

    return 0;
}