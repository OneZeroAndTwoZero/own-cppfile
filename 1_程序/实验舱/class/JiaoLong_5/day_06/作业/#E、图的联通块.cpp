#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,ans = 0;
bool vis[100005] = {0};
vector<int> a[100005];

void dfs(int u){
	vis[u] = 1;
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
	for(int i = 1;i <= n;i++){
		if(!vis[i]){
			dfs(i);
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

