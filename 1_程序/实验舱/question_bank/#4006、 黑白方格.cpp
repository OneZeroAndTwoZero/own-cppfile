#include<bits/stdc++.h>
using namespace std;

int T;
long long n, m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &T);
    while (T --){
        scanf("%lld %lld", &n, &m);
        printf("%lld\n", max(n, m));
    }

    return 0;
}