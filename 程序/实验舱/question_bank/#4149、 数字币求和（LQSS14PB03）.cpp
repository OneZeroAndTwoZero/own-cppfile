#include<bits/stdc++.h>
using namespace std;

int N, K;
int a[35];
int ans1 = 0, ans2 = 0;
bool cnt1[1000006], cnt2[1000006];
bool p[1000006];
int pri[200005];

void EulerPri(int n){
	int cnt = 0;
	for (int i = 2; i <= n; i ++){
		if (!p[i]) pri[cnt ++] = i;
		for (int j = 0; j < cnt && i * pri[j] <= n; j ++){
			p[i * pri[j]] = 1;
			if (i % pri[j]) continue;
			break;
		}
	}
}

void dfs(int k, int cnt, int sum){
	if (k == N){
		if (cnt != K) return;
		if (!cnt1[sum]) cnt1[sum] = 1, ans1 ++;
		if (p[sum] && !cnt2[sum]) cnt2[sum] = 1, ans2 ++;
		return;
	}
	if (cnt > K) return;
	dfs(k + 1, cnt, sum);
	dfs(k + 1, cnt +1, sum + a[k]);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	EulerPri(1000000);
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d,", &a[i]);
	}
	scanf("%d", &K);
	dfs(0, 0, 0);
	printf("%d\n%d\n", ans1, ans2);
	
	return 0;
}
