#include<bits/stdc++.h>
using namespace std;

int T;
long long x, y;

long long operate(long long x){
	long long res = 0;
	for (long long i = 1; i <= x / i; i ++){
		if (x % i) continue;
		res += 2;
		if (i * i == x) res --;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%lld %lld", &x, &y);
		while (y --){
			x = operate(x);
			if (x <= 2) break;
		}
		printf("%lld\n", x);
	}

	return 0;
}
