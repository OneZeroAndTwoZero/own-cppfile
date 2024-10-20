#include<bits/stdc++.h>
using namespace std;

struct node{
	int val, l, r;
};

int N, t, cid = 1;
node tree[100005];

void addnode(int pos, int x){
	if (!tree[pos].val){
		tree[pos].val = x;
		return;
	}
	int cur = __gcd(tree[pos].val, x);
	if (cur == 1){
		if (!tree[pos].l) tree[pos].l = ++ cid;
		addnode(tree[pos].l, x);
	}else{
		if (!tree[pos].r) tree[pos].r = ++ cid;
		addnode(tree[pos].r, x);
	}
}

void erg(int pos){
	if (pos == 0) return;
	erg(tree[pos].l);
	printf("%d ", tree[pos].val);
	erg(tree[pos].r);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &t);
		addnode(1, t);
	}
	erg(1);

	return 0;
}
