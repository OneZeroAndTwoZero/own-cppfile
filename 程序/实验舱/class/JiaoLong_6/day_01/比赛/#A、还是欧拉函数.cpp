#include<bits/stdc++.h>
using namespace std;

long long l,r,mod = 666666667,ans;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

long long operate(long long x){
    if(x == 1) return 0;
    long long res = 0;
    for(long long i = 1;i <= x;i ++){
        if(gcd(i,x) != 1) res ++;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld",&l,&r);
    for(int i = l;i <= r;i ++){
        ans += operate(i);
        ans %= mod;
    }
    printf("%lld\n",ans % mod);

	return 0;
}