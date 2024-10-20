#include<bits/stdc++.h>
using namespace std;

long long n,x,y,a,b;
long long ans = 0,now = 0;
long long s1,s2,m;
long long no = 0,yes = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld %lld",&n,&x,&y,&a,&b);
    while(n --){
        scanf("%lld %lld %lld",&s1,&s2,&m);
        m = m - s1 * x - s2 * y;
        if(m){
            yes ++,no = 0;
            now += m;
            if(m > s1 * x + s2 * y) now += ceil((double)m / 2.0);
            if(yes >= a) now = now * 2;
        }else{
            yes = 0,no ++;
            if(no >= b) now = now / 2;
        }
        ans = max(ans,now);
    }
    printf("%lld %lld\n",ans,now);

    return 0;
}