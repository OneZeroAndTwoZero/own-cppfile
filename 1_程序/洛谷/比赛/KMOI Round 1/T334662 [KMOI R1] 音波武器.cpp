#include<bits/stdc++.h>
using namespace std;

long long l,r,k,now = 1,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %lld %lld",&l,&r,&k);
    for(int i = 1;i < l;i ++){
        now = (now * i) % k;
    }
    for(int i = l;i <= r;i ++){
        now = (now * i) % k;
        ans = max(ans,now);
    }
    printf("%lld\n",ans);

	return 0;
}