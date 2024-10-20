#include<bits/stdc++.h>
using namespace std;

long long x, y, ansx, ansy;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	for (int i = 0; i < 3; i ++){
		scanf("%lld %lld", &x, &y);
		ansx ^= x, ansy ^= y;
	}
	printf("%lld %lld\n", ansx, ansy);

	return 0;
}
