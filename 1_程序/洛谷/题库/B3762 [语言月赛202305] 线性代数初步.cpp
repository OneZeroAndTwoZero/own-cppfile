#include<bits/stdc++.h>
using namespace std;

long long a,b,c,d;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long long ans = a * d - b * c;
    printf("%lld\n",ans);

    return 0;
}