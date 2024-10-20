#include<bits/stdc++.h>
using namespace std;

int k,t,n,m,u,v,ans = 0;
bool vis[1005] = {0};
vector<int> a[1005];
int num[1005] = {0},check[1005] = {0};

void dfs(int fr,int u){
	vis[u] = 1;
	check[u] += fr;
	for(auto && i : a[u]){
		if(!vis[i]) dfs(fr,i);
	}
}

int main(){
	scanf("%d %d %d",&k,&n,&m);
	for(int i = 0;i < k;i++){
		scanf("%d",&t);
		num[t] ++;
	}
	for(int i = 0;i < m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
	}
	for(int i = 1;i <= n;i++){
		memset(vis,0,sizeof(vis));
		if(num[i]) dfs(num[i],i);
	}
	for(int i = 1;i <= n;i++){
		ans += check[i] == k;
	}
	printf("%d\n",ans);

	return 0;
}

