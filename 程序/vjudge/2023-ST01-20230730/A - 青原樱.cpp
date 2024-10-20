#include<bits/stdc++.h>
using namespace std;

long long type,n,m,p;
long long ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld %lld %lld %lld",&type,&n,&m,&p);
    n = n - m + 1;
    for(long long i = n - m + 1;i <= n;i ++){
        ans = ans * i;
        ans %= p;
    }
    printf("%lld\n",ans);

	return 0;
}
