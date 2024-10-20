#include<bits/stdc++.h>
using namespace std;

int t,n,m,ans;
int a[105] = {0};
bool vis[105] = {0};

void dfs(int u,int sum){
	if(vis[u]) return;
	vis[u] = 1;
	ans = max(ans,sum);
	if(u % m != 0) vis[u - 1] = 1;
	if((u + 1) % m != 0) vis[u + 1] = 1;
	if(u >= m) vis[u - m] = 1;
	if(n * m - u > m) vis[u + m] = 1;
	if(u % m != 0 && u >= m) vis[u - 1 - m] = 1;
	if((u + 1) % m != 0 && u >= m) vis[u + 1 - m] = 1;
	if((u + 1) % m != 0 && n * m - u > m) vis[u + 1 + m] = 1;
	if(u % m != 0 && n * m - u > m) vis[u + m - 1] = 1;
	for(int i = u;i < n * m;i ++){
		dfs(i,sum + a[u]);
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i < n;i ++){
			for(int j = 0;j < m;j ++){
				scanf("%d",&a[i * m + j]);
			}
		}
		memset(vis,0,sizeof(vis));
		ans = 0;
		dfs(0,0);
		printf("%d\n",ans);
	}

	return 0;
}

