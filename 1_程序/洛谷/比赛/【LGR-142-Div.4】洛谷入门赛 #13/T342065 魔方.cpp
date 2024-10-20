#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%lld",&n);
    printf("%lld %lld %lld",8LL,12 * (n - 2),6 * (n - 2) * (n - 2));

    return 0;
}