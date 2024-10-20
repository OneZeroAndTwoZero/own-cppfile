#include<bits/stdc++.h>
using namespace std;

int t;
long long n,a,b,cur;
long long c,h,o;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

void out(){
    printf("C");
    if(c > 1) printf("%lld",c);
    printf("H");
    if(h > 1) printf("%lld",h);
    if(o) printf("O");
    if(o > 1) printf("%lld",o);
    printf("\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld %lld",&n,&a,&b);
        c = a / 11 * 3,h = b / 9 * 1;
        o = n - c - h;
        c *= 16,h *= 12 * 16,o *= 12;
        cur = gcd(gcd(c,h),o);
        c /= cur,h /= cur,o /= cur;
        out();
    }

    return 0;
}
