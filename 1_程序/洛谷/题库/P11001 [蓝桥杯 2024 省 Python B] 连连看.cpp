#include<bits/stdc++.h>
using namespace std;

int N, M;
int a[1005][1005];
int ans = 0;

void operate(int x, int op){
	// cout << x << " " << op << ";;\n";
	unordered_map<int, int> f;
	f.clear();
	for (int i = 1; i <= N; i ++){
		int j = op * (i - x); // op=1->main op=2->!main
		if (j < 1 || j > M) continue;
		f[a[i][j]] ++;
	}
	for (auto && i : f){
		// cout << i.first << " " << i.second << "[]\n";
		ans += (i.second * (i.second - 1));
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i ++){
		for (int j = 1; j <= M; j ++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int cur = -M; cur <= N; cur ++){
		operate(cur, 1);
	}
	for (int cur = 2; cur <= N + M; cur ++){
		operate(cur, -1);
	}
	printf("%d\n", ans);

    return 0;
}
