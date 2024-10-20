#include<bits/stdc++.h>
using namespace std;

struct node{
	int l, r, val;
};

int N, M, tot = 0;
int a[1000006];
int rt[1000006];
node tree[25000007];
int v, op, x, val;

int copy(int p){
	tree[++ tot] = tree[p];
	return tot;
}

int build(int l, int r){
	int p = ++ tot;
	if (l == r){
		tree[p].val = a[l];
		return p;
	}
	int mid = (l + r) >> 1;
	tree[p].l = build(l, mid);
	tree[p].r = build(mid + 1, r);
	return p;
}

int update(int p, int l, int r, int x, int val){
	p = copy(p);
	if (l == r){
		tree[p].val = val;
		return p;
	}
	int mid = (l + r) >> 1;
	if (x <= mid) tree[p].l = update(tree[p].l, l, mid, x, val);
	else tree[p].r = update(tree[p].r, mid + 1, r, x, val);
	return p;
}

int query(int p, int l, int r, int x){
	if (l == r) return tree[p].val;
	int mid = (l + r) >> 1;
	if (x <= mid) return query(tree[p].l, l, mid, x);
	else return query(tree[p].r, mid + 1, r, x);
	return -1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &a[i]);
	}
	rt[0] = build(1, N);
	for (int i = 1; i <= M; i ++){
		scanf("%d %d %d", &v, &op, &x);
		if (op == 1){
			scanf("%d", &val);
			rt[i] = update(rt[v], 1, N, x, val);
		}else{
			rt[i] = rt[v];
			printf("%d\n", query(rt[v], 1, N, x));
		}
	}

    return 0;
}
