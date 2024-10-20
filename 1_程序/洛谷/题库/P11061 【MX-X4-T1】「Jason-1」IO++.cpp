#include<bits/stdc++.h>
using namespace std;

int N;
int maxn = 0, t, cnt;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	while (N --){
		scanf("%d", &t);
		maxn = max(maxn, t);
		cnt += (t > 0);
	}
	printf("%d\n", maxn + cnt);
	
	return 0;
}
