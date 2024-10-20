#include<bits/stdc++.h>
using namespace std;

long long t,x,y,ans = 0;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld",&x,&y);
    t = x * y;
    for(long long i = 1;i <= y;i ++){
        if(t % i != 0) continue;
        ans += gcd(t / i,i) == x;
    }
    printf("%lld\n",ans);

	return 0;
}