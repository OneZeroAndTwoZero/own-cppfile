#include<bits/stdc++.h>
using namespace std;

long long N;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%lld", &N);
	if (N == 1) printf("1\n");
	else printf("%lld\n", N - 1);
		
	return 0;
}
