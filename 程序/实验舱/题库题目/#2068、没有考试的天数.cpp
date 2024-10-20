#include<bits/stdc++.h>
using namespace std;

long long n,a,b,c,ans = 0;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

long long lcm(long long a,long long b){
    return a * b / gcd(a,b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    ans += n / a + n / b + n / c;
    ans -= n / lcm(a,b) + n / lcm(b,c) + n / lcm(a,c);
    ans += n / lcm(lcm(a,b),c);
    printf("%lld\n",n - ans);

	return 0;
}