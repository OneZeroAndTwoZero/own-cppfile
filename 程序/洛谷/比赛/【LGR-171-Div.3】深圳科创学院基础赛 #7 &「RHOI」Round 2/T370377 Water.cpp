#include<bits/stdc++.h>
using namespace std;

long long a,b,n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&a,&b,&n);
    long long num = a / b;
    printf("%lld\n",b * min(num,n));

    return 0;
}