#include<bits/stdc++.h>
using namespace std;

long long u,a,t,v;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld %lld",&u,&a,&t);
    v = u + a * t;
    printf("%lld\n",v);

	return 0;
}