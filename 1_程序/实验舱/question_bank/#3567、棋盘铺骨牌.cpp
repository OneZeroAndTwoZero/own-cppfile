#include<bits/stdc++.h>
using namespace std;

long long n,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%lld %lld",&n,&m);
	printf("%lld\n",(n * m) >> 1);

	return 0;
}