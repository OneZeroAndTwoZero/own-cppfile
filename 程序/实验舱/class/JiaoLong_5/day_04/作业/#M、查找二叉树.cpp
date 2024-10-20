#include<bits/stdc++.h>
using namespace std;

struct node{
	int dat,l = -1,r = -1;
};

int n,x,ans[105] = {0},fa[105] = {0},pos = 1;
node a[105];

void mids(int u){
	if(u == 0) return;
	mids(a[u].l);
	ans[pos ++] = a[u].dat;
	mids(a[u].r);
}

int main(){
	cin >> n >> x;
	for(int i = 1;i <= n;i++){
		cin >> a[i].dat >> a[i].l >> a[i].r;
		fa[a[i].l] = fa[a[i].r] = i;
	}
	for(int i = 1;i <= n;i++){
		if(!fa[i]){
			mids(i);
			break;
		}
	}
	for(int i = 1;i <= n;i++){
		if(ans[i] == x){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

