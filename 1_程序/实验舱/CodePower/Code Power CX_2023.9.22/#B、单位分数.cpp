#include<bits/stdc++.h>
using namespace std;

long long a = 0,b = 1;
long long n,t;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    for(long long i = 0;i < n;i ++){
        scanf("%lld",&t);
        long long tem = gcd(b,t);
        // 必须先更新a,否则就会改了整整10分钟的bug
        a = (t / tem * a) + (b / tem);
        b = b / tem * t;
        // 顺手化成最简分数
        tem = gcd(a,b);
        a /= tem,b /= tem;
    }
    printf("%lld %lld\n",a,b);

	return 0;
}