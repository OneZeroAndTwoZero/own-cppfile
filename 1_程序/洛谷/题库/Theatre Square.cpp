#include<bits/stdc++.h>
using namespace std;

long long n,m,a,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%lld %lld %lld",&n,&m,&a);
	ans = ((n - 1) / a + 1) * ((m - 1) / a + 1);
	printf("%lld\n",ans);

	return 0;
}

