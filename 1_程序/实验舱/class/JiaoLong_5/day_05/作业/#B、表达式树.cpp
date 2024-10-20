#include<bits/stdc++.h>
using namespace std;

struct node{
	string data;
	int l,r;
};

node a[105];
bool vis[105] = {0};
int n,t;

void z(int u){
	if(a[u].)
	if(a[a[u].l].l != -1 || a[a[u].l].r != -1){
		cout << "(";
	}
	dfs(a[u].l);
}

int main(){
	cin >> n;
	for(int i = 1;i < n;i++){
		cin >> a[i].data >> a[i].l >> a[i].r;
		if(a[i].l != -1) vis[a[i].l] = 1;
		if(a[i].r != -1) vis[a[i].r] = 1;
	}
	for(int i = 1;i <= n;i++){
		if(!vis[i]) t = i;
	}

	return 0;
}

