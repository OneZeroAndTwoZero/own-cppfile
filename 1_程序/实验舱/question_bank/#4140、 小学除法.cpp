#include<bits/stdc++.h>
using namespace std;

long long A, B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%lld %lld", &A, &B);
	printf("%lld/%lld=%lld", A, B, A / B);
	if (A % B) printf("......%lld\n", A % B);

	return 0;
}
