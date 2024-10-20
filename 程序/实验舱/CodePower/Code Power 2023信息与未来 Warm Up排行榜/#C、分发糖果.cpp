#include<bits/stdc++.h>
using namespace std;

int t,n;
long long x;

long long slowmul(long long a,long long b){
    if(b == 0) return 0;
    long long res = slowmul(a,(b >> 1));
    res *= 2;
    if(b & 1) res += a;
    return res % n;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&t,&n);
    while(t --){
        scanf("%lld",&x);
        long long num1 = x - 2,num2 = x - 1;
        if(num1 & 1) num2 >>= 1;
        else num1 >>= 1;
        long long ans = slowmul(num1,num2);
        // cout << ans << "[][]\n";
        ans = (ans + x) % n;
        if(ans == 0) ans = n;
        printf("%lld\n",ans);
    }

	return 0;
}