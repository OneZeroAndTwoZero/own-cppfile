#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long n, x, y;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%lld %lld %lld", &n, &x, &y);
	if (x == y){
		printf("0 0\n");
		return 0;
	}
	if (y < x) y += n;
	printf("%lld %lld\n", (y - x), n - (y - x));

    return 0;
}
