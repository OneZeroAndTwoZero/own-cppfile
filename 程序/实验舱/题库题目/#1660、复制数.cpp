#include<bits/stdc++.h>
using namespace std;

long long n,ans = 0;

bool ok(long long x){
    long long tem = x,q = 1;
    while(x)
        x /= 10,q *= 10;
    return tem * (q + 1) <= n;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    for(long long i = 1;;i ++)
        if(!ok(i)) break;
        else ans ++;
    printf("%lld\n",ans);

	return 0;
}