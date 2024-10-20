#include<bits/stdc++.h>
using namespace std;

int n,u,v,q,qi;
vector<int> a[114514];
bool vis[114514] = {0};
int ans[114514] = {0};
int cnt = 0;

void dfs(int u,int d){
	cnt = max(d,cnt);
	for(auto && i : a[u]){
		if(!vis[i]){
			vis[i] = 1;
			dfs(i,d + 1);
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n - 1;i ++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 1;i <= n;i ++){
		for(int j = 0;j <= n;j ++){
			vis[j] = 0;
		}
		vis[i] = 1;
		cnt = 0;
		dfs(i,0);
		ans[i] = cnt;
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d",&qi);
		printf("%d\n",ans[qi]);
	}

	return 0;
}
