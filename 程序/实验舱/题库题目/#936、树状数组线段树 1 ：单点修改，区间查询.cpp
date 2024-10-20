#include<bits/stdc++.h>
using namespace std;

struct node{
	long long li,ri;
	long long xi;
	long long mi = 0;
};

long long n,q,op,l,r,x;
long long a[1000006] = {0};
node tree[4000006];

void chuan(long long pos){
	if(tree[pos].li >= tree[pos].ri) return;
	tree[pos * 2].mi += tree[pos].mi;
	tree[pos * 2 + 1].mi += tree[pos].mi;
	tree[pos * 2].xi += tree[pos].mi * (tree[pos * 2].ri - tree[pos * 2].li + 1);
	tree[pos * 2 + 1].xi += tree[pos].mi * (tree[pos * 2 + 1].ri - tree[pos * 2 + 1].li + 1);
	tree[pos].mi = 0;
}

void build(long long pos,long long l,long long r){
	if(l == r){
		tree[pos].li = tree[pos].ri = l;
		tree[pos].xi = a[l];
		return;
	}
	long long mid = (l + r) >> 1;
	build(2 * pos,l,mid);
	build(2 * pos + 1,mid + 1,r);
	tree[pos].li = l;
	tree[pos].ri = r;
	tree[pos].xi = tree[pos * 2].xi + tree[pos * 2 + 1].xi;
	//cout << pos << ";;;;" << tree[pos].li << ";;;" << tree[pos].ri << ";;;" << tree[pos].xi << "\n";
}

void add(long long pos,long long p,long long x){
	//cout << pos << ";;;" << l << ";;;" << r << ";;;" << x << "\n";
	if(tree[pos].li > p || tree[pos].ri < p)
		return;
	if(tree[pos].li == p && tree[pos].ri == p){
		tree[pos].xi += x;
		return;
	}
	//int mid = (tree[pos].li + tree[pos].ri) >> 1;
	chuan(pos);
	add(2 * pos,p,x);
	add(2 * pos + 1,p,x);
	tree[pos].xi = tree[pos * 2].xi + tree[pos * 2 + 1].xi;
}

long long find(long long pos,long long l,long long r){
	if(tree[pos].li > r || tree[pos].ri < l)
		return 0LL;
	if(tree[pos].li >= l && tree[pos].ri <= r){
		return tree[pos].xi;
	}
	chuan(pos);
	long long res = find(2 * pos,l,r) + find(2 * pos + 1,l,r);
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%lld %lld",&n,&q);
	for(int i = 0;i < n;i ++){
		scanf("%lld",&a[i]);
	}
	build(1,0,n - 1);
	while(q --){
		scanf("%lld",&op);
		if(op == 1){
			scanf("%lld %lld",&l,&x);
			add(1,l - 1,x);
		}else{
			scanf("%lld %lld",&l,&r);
			printf("%lld\n",find(1,l - 1,r - 1));
		}
	}

	return 0;
}