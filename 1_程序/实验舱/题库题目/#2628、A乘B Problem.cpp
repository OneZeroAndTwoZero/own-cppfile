#include<bits/stdc++.h>
using namespace std;

long long a,b,p;

long long times(long long a,long long b){
    if(b == 0) return 0LL;
    long long res = times(a,b / 2);
    res = (res * 2) % p;
    if(b & 1) res += a;
    return res % p;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld",&a,&b,&p);
    printf("%lld\n",times(a,b));

	return 0;
}
