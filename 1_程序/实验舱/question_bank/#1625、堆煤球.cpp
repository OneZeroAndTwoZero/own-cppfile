#include<bits/stdc++.h>
using namespace std;

long long n,ans,now;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    n %= 233;
    now = 1;
    for(int i = 2;i <= n + 1;i ++){
        ans += now;
        now += i;
    }
    printf("%lld\n",ans % 233);

	return 0;
}