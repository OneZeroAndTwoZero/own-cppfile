#include<bits/stdc++.h>
using namespace std;

int N, M, C, K;
int p, q;
long long a[1000006], cur = 0;
vector<int> food[131];
unordered_map<int, int> vis;
int W = 0;

void putout(bool vis, __int128 x){
	if (x == 0){
		if (!vis) printf("0");
		return;
	}
	putout(1, x / 10);
	printf("%d", (int)(x % 10));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d %d %d", &N, &M, &C, &K);
	for (int i = 0; i < N; i ++){
		scanf("%lld", &a[i]);
		cur |= a[i];
	}
	while (M --){
		scanf("%d %d", &p, &q);
		food[p].push_back(q);
	}
	for (int i = 0; i < K; i ++){
		if (!(cur & (1LL << i))) continue;
		for (auto && x : food[i]){
			vis[x] = 1;
		}
	}
	for (int i = 0; i < K; i ++){
		for (auto && x : food[i]){
			if (vis[x]) continue;
			W --;
			break;
		}
		W ++;
	}
	__int128 ans = 1;
	ans <<= W;
	ans -= N;
	putout(0, ans);
	printf("\n");
	
	return 0;
}
