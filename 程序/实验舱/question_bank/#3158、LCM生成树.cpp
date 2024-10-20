#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    printf("%lld\n",(((n + 1) * n) / 2) - 1);

    return 0;
}