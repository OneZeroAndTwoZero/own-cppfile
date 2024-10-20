#include<bits/stdc++.h>
using namespace std;

int t;
long long n,k,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld",&n,&k);
        ans = n / (k + k - 1) * 2;
        n %= (k + k - 1);
        if(!n) ans --;
        if(n <= k) ans ++;
        else ans += 2;
        printf("%lld\n",ans);
    }

	return 0;
}