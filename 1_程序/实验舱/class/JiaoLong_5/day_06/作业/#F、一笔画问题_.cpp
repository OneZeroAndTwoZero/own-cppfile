#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,s = 1;
int a[105][105] = {0};
int num[1005];
int ans[1005] = {0},pos = 0;
bool vis[1005] = {0};

void dfs(int u){
	vis[u] = 1;
	ans[pos ++] = u;
	for(int i = 1;i <= n;i++){
		if(a[u][i] && !vis[i]){
			a[u][i] = a[i][u] = 0;
			dfs(i);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&u,&v);
		a[u][v] = a[v][u] = 1;
		num[u] ++,num[v] ++;
	}
	for(int i = 1;i <= n;i++){
		if(num[i] & 1) s = i;
	}
	dfs(s);
	for(int i = 0;i < pos;i++){
		printf("%d ",ans[i]);
	}
	if(s == 1) printf("1\n");

	return 0;
}

