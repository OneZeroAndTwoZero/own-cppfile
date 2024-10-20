#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int T, N;
int las, t, ans = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d", &N);
		scanf("%d", &las);
		ans = 0;
		for (int i = 1; i < N; i ++){
			scanf("%d", &t);
			ans += __lg(((max(las, t) - 1) / min(las, t)));
			las = t;
		}
		printf("%d\n", ans);
	}

	return 0;
}
