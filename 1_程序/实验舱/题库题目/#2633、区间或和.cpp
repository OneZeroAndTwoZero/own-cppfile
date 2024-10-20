#include<bits/stdc++.h>
using namespace std;

long long a,b,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%lld %lld",&a,&b)){
        ans = 0;
        for(long long i = 0,k = 1;i < 62;i ++,k *= 2)
            if((a & k) || (b & k) || (b - a + 1) > k)
                ans += k;
        printf("%lld\n",ans);
    }

	return 0;
}