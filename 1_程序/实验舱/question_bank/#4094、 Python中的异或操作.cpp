#include<bits/stdc++.h>
using namespace std;

int n;
long long a, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    while (n --){
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a ^ b);
    }

    return 0;
}