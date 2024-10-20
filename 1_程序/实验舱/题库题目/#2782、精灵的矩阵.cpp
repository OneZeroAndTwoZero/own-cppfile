#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long n1,m1,n2,m2;

long long man(long long x1,long long y1,long long x2,long long y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld",&n,&m);
    scanf("%lld %lld",&n1,&m1);
    scanf("%lld %lld",&n2,&m2);
    printf("%lld\n",min({man(1,1,n,m),
        man(1,1,n1,m1) + man(n2,m2,n,m),
        man(1,1,n2,m2) + man(n1,m1,n,m)}));

	return 0;
}