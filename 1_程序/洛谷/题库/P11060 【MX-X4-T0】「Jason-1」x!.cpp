#include<bits/stdc++.h>
using namespace std;

int N;
__int128 x;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	x = 1;
	for (int i = 1; i <= N; i ++){
		x *= i;
	}
	if (x % (N + 1)) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}
