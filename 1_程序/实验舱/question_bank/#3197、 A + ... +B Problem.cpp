#include<bits/stdc++.h>
using namespace std;

long long N, A, B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%lld %lld %lld", &N, &A, &B);
	if (A > B || (N == 1 && A != B)) printf("0\n");
	else printf("%lld\n", ((N - 1) * B + A) - ((N - 1) * A + B) + 1);

	return 0;
}
