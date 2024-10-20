#include<bits/stdc++.h>
using namespace std;

long long n,ans = -2,now = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%lld",&n);
    while(now < n){
        ans += 2;
        now *= 4;
    }
    printf("%lld\n",ans);

	return 0;
}