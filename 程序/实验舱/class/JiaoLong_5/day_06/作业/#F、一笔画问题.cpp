#include<bits/stdc++.h>
using namespace std;

int vis[1005] = {0};
vector<int> a[1005];
int n,m,u,v,s = 1;
int ans[1005] = {0},pos = 0;

void dfs(int u){
	vis[u] = 1;
	if(pos == n){
		for(int i = 0;i < pos;i++){
			cout << ans[i] << " ";	
		}
		cout << u << endl;
		exit(0);
	}
	for(auto &&i : a[u]){
		if(vis[i]) continue;
		ans[pos ++] = i;
		dfs(i);
		pos --;
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 1;i <= n;i++){
		if(a[i].size() & 1) s = i;
	}
	ans[0] = s;
	dfs(s);

	return 0;
}

