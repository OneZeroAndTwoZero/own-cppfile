#include<bits/stdc++.h>
using namespace std;

int N, sum[2];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		sum[i & 1] += i;
	}
	printf("%d %d\n", sum[1], sum[0]);

	return 0;
}
