#include<bits/stdc++.h>
using namespace std;

int n,l,m,k,t,ans = 0;
vector<int> a[1005];
bool vis[1005] = {0};

void dfs(int k,int u){
	ans ++;
	cout << k << ";;;" << u << "[][]" << ans << endl;
	if(k >= l) return;
	vis[u] = 1;
	for(auto && i : a[u]){
		if(!vis[i]){
			dfs(k + 1,i);
		}
	}
	cout << ans << "[][][]\n";
}

int main(){
	scanf("%d %d",&n,&l);
	for(int i = 1;i <= n;i++){
		scanf("%d",&m);
		while(m --){
			scanf("%d",&t);
			a[t].push_back(i);
		}
	}
	scanf("%d",&k);
	while(k --){
		scanf("%d",&t);
		for(int i = 0;i <= 1000;i++) vis[i] = 0;
		ans = 0;
		dfs(0,t);
		printf("%d\n",--ans);
	}

	return 0;
}

