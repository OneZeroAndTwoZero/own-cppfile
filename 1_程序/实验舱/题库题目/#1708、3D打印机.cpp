#include<bits/stdc++.h>
using namespace std;

long long n,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    ans = ceil(log2(n)) + 1;
    printf("%lld\n",ans);

	return 0;
}