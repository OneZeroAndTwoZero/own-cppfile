#include<bits/stdc++.h>
using namespace std;

long long A, B;
int val[5];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%lld %lld", &A, &B);
	for (int i = 0; i < 3; i ++){
		scanf("%d", &val[i]);
	}
	for (int i = 0; i < 4; i ++){
		printf("%lld\n", A + B - val[i]);
	}
		
	return 0;
}
