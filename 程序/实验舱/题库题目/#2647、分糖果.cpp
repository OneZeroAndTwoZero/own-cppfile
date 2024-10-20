#include<bits/stdc++.h>
using namespace std;

long long n,l,r,ans,las;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d %d",&n,&l,&r);
	las = (l / n) * n;
	if(r - las >= n - 1) ans = n - 1;
    else ans = r - las;
	printf("%lld\n",ans);

	return 0;
}