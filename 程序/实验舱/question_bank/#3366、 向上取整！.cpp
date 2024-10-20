#include<bits/stdc++.h>
using namespace std;

long long a, i;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld", &a, &i);
    printf("%lld\n", (i - 1) * a + 1);

    return 0;
}