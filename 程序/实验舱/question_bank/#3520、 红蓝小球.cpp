#include<bits/stdc++.h>
using namespace std;

long long N, A, B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lld %lld %lld", &N, &A, &B);
	printf("%lld\n", N / (A + B) * A + min(N % (A + B), A));

	return 0;
}
