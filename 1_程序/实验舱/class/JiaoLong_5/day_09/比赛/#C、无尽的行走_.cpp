#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,ans = 0;
bool vis[200005] = {0},ok;
vector<int> a[200005];

void dfs(int s){
	if(ok) return;
	vis[s] = 1;
	for(auto && i : a[s]){
		if(!vis[i]){
			dfs(i);
		}else{
			ok = 1;
			break;
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
	}
	for(int i = 1;i <= n;i++){
		for(int j = 0;j <= n;j++) vis[i] = 0;
		ok = 0;
		dfs(i);
		if(ok){
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

