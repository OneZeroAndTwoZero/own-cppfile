#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int N, P = 0;
int C[300005];
int A[300005], ans[300005];
map<int, int> rnk;

void update(int idx, int cur){
	for (int i = idx; i <= N; i += lowbit(i)){
		// cout << i << ";;\n";
		C[i] += cur;
	}
}

int query(int idx){
	int res = 0;
	for (int i = idx; i; i -= lowbit(i)){
		res += C[i];
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &A[i]);
		rnk[A[i]] = 114514;
	}
	for (auto && i : rnk){
		i.second = ++ P;
		// cout << i.first << " " << i.second << "\n";
	}
	for (int i = N; i; i --){
		ans[i] = query(rnk[A[i]] - 1);
		// cout << rnk[A[i]] << ";;\n";
		update(rnk[A[i]], 1);
	}
	for (int i = 1; i <= N; i ++){
		printf("%d%c", ans[i], " \n"[i == N]);
	}

	return 0;
}
