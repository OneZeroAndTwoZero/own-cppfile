#include<bits/stdc++.h>
using namespace std;

struct node{
	int idx, l, r;
};

int T, N, K;
node tree[100005];
int F[100005], h[100005];
vector<int> P1, P2;

void firerg(int u){
	if (!u) return;
	P1.push_back(u);
	firerg(tree[u].l);
	firerg(tree[u].r);
}

void laserg(int u){
	if (!u) return;
	laserg(tree[u].l);
	laserg(tree[u].r);
	P2.push_back(u);
}

int find(int x){
	if (F[x] == x) return x;
	F[x] = find(F[x]);
	return F[x];
}

void merge(int x, int y){
	int fx = find(x), fy = find(y);
	if (fx == fy) return;
	if (h[fx] < h[fy]) swap(fx, fy);
	F[fy] = fx, h[fx] = max(h[fx], h[fy] + 1);
} 

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d %d", &N, &K);
		for (int i = 1; i <= N; i ++){
			tree[i].idx = i, F[i] = i;
			h[i] = 1;
			scanf("%d %d", &tree[i].l, &tree[i].r);
		}
		P1.clear(), P2.clear();
		firerg(1);
		laserg(1);
		for (int i = 0; i < P1.size(); i ++){
			merge(P1[i], P2[i]);
		}
		int res = 0;
		for (int i = 1; i <= N; i ++){
			res += (i == F[i]);
		}
		printf("%d\n", res >= K);
	}

	return 0;
}
