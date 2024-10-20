#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll y,z,ans;
int main () {
	ans=1e18;
	scanf("%lld%lld",&y,&z);
	for (ll i=100000;i<=999999;i++) {ans=min(ans,abs(i*1000000+y-z));}
	printf("%lld\n",ans);
	return 0;
}
