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

namespace edge{
	struct edge{
		int v, nxt;
	};
	
	int P = 1, head[1000006];
	edge E[2000006];
	
	void addedge(int u, int v){
		E[++ P] = {v, head[u]};
		head[u] = P;
	}
}

int N, Q;
int x, y;
int d[1000006];
bool vis[1000006];

void topsort(){
	queue<int> q;
	for (int i = 1; i <= N; i ++){
		if (d[i] <= 1) q.push(i), vis[i] = 1;
	}
	while (q.size()){
		int u = q.front();
		q.pop();
		for (int i = edge::head[u]; i; i = edge::E[i].nxt){
			int v = edge::E[i].v;
			if (vis[v]) continue;
			union_find::merge(u, v);
			d[v] --;
			if (d[v] > 1) continue;
			q.push(v);
			vis[v] = 1;
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	union_find::__init(N);
	for (int i = 0; i < N; i ++){
		scanf("%d %d", &x, &y);
		d[x] ++, d[y] ++;
		edge::addedge(x, y);
		edge::addedge(y, x);
	}
	topsort();
	scanf("%d", &Q);
	while (Q --){
		scanf("%d %d", &x, &y);
		if (union_find::find(x) == union_find::find(y)) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
