#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
bool vis[105] = {0};
vector<int> a[105];

void dfs(int u){
	vis[u] = 1;
	printf("%d ",u);
	for(auto && i : a[u]){
		if(!vis[i]) dfs(i);
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 0;i < n;i++){
		sort(a[i].begin(),a[i].end());
	}
	dfs(0);

	return 0;
}

