#include<bits/stdc++.h>
using namespace std;

int T, N, K, t;
vector<int> A[400005];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &T);
	while (T --){
		scanf("%d %d", &N, &K);
		for (int i = 0; i < K; i ++) A[i].clear();
		for (int i = 0; i < N; i ++){
			scanf("%d", &t);
			A[i % K].push_back(t);
		}
		for (int i = 0; i < K; i ++){
			sort(A[i].begin(), A[i].end());
		}
		bool flag = 1;
		int las = -0x3f3f3f3f;
		for (int i = 0; i < N; i ++){
			if (A[i % K][i / K] < las){
				flag = 0;
				break;
			}
			las = A[i % K][i / K];
		}
		if (flag) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
