#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,ans = 0,num = 0;
vector<int> a[1005];
int h[1005] = {0};
bool vis[1005];


void dfs(int w){
	ans ++;
	vis[w] = 1;
	for(auto && i : a[w]){
		if(!vis[i] && h[i] < h[w]) dfs(i);
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++) scanf("%d",&h[i]);
	for(int i = 1;i <= m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 1;i <= n;i++){
		ans = 0;
		dfs(i);
		for(int i = 0;i <= 1003;i++) vis[i] = 0;
		if(ans == n){
			num ++;
			printf("%d\n",i);
			break;
		}
	}
	if(!num){
		printf("Non\n");
	}

	return 0;
}

