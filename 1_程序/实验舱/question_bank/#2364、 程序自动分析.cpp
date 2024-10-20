#include<bits/stdc++.h>
using namespace std;

namespace union_find{
	int F[2000006];
	int size[2000006];
	
	void __init(int N){
		for (int i = 1; i <= N + 2; i ++){
			F[i] = i, size[i] = 1;
		}
	}
	
	int find(int x){
		if (F[x] == x) return x;
		F[x] = find(F[x]);
		return F[x];
	}
	
	void merge(int x, int y){
		int fx = find(x), fy = find(y);
		if (fx == fy) return;
		if (size[fx] < size[fy]) swap(fx, fy);
		F[fy] = fx;
		size[fx] += size[fy];
	}
}

namespace discr{
	vector<int> A;
	
	void __init(){
		sort(A.begin(), A.end());
		unique(A.begin(), A.end());
	}
	
	int query(int x){
		int pos = lower_bound(A.begin(), A.end(), x) - A.begin();
		if (A[pos] != x) return -1;
		return pos + 1;
	}
}

int T, N;
int x[1000006], y[1000006], op[1000006];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%d", &N);
		discr::A.clear();
		union_find::__init(2 * N);
		for (int i = 0; i < N; i ++){
			scanf("%d %d %d", &x[i], &y[i], &op[i]);
			discr::A.push_back(x[i]);
			discr::A.push_back(y[i]);
		}
		discr::__init();
		for (int i = 0; i < N; i ++){
			if (op[i] == 1){
				union_find::merge(discr::query(x[i]), discr::query(y[i]));
			}
		}
		bool ans = 1;
		for (int i = 0; i < N; i ++){
			if (op[i] == 0){
				if(union_find::find(discr::query(x[i])) == union_find::find(discr::query(y[i])))
					ans = 0;
			}
		}
		if (ans) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
