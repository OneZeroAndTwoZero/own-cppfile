#include<bits/stdc++.h>

namespace union_find{
	int F[100005];
	int size[100005];
	int dis[100005];

	int find(int x){
		if (F[x] == x) return x;
		int fx = find(F[x]);
		dis[x] += dis[F[x]];
		F[x] = fx;
		return F[x];
	}

	void merge(int x, int y){
		int fx = find(x), fy = find(y);
		if (fx == fy) return;
		F[fx] = fy; // fy is father
		dis[fx] = size[fy];
		size[fy] += size[fx];
	}
}

using namespace std;
using namespace union_find;

int P, X, Y;
char op;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> P;
	for (int i = 1; i <= 30000; i ++){
		F[i] = i;
		size[i] = 1;
	}
	while (P --){
		cin >> op >> X;
		if (op == 'M'){
			cin >> Y;
			merge(X, Y);
		}else{
			find(X);
			cout << dis[X] << "\n";
		}
	}
		
	return 0;
}
