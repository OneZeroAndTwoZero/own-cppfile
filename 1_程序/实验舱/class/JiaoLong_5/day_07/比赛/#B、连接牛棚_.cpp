#include<bits/stdc++.h>
using namespace std;

int t,n,m,u,v,ans = 1000000;
vector<int> a[500005];
bool vis[500005] = {0};
bool f1[500005],fn[500005];

void dfs(int u,int f){
	vis[u] = 1;
	if(f == 1) f1[u] = 1;
	else fn[u] = 1;
	for(auto &&i : a[u]){
		if(!vis[i]) dfs(i,f);
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i <= n;i++){
			a[i].clear();
			vis[i] = 0;
		}
		while(m --){
			scanf("%d %d",&u,&v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		dfs(1,1);
		for(int i = 0;i <= n;i++) vis[i] = 0;
		dfs(n,n);
		if(fn[1]){
			printf("0\n");
			continue;
		}
		for(int i = 1;i <= n;i++){
			if(f1[i]){
				for(int j = 1;j <= n;j++){
					if(fn[i]){
						ans = min(ans,(i - j) * (i - j));
					}
				}
			}
		}
		for(int i = 1;i <= n;i++){
			if(!fn[i] && !f1[i]){
				for(int j = i;j <= n;j ++){
					if(!fn[j] && !f1[j]){
						int t1 = 10000000,tn = 10000000;
						for(int k = 1;k <= n;k++){
							if(f1[k]){
								t1 = min(t1,pow(k - i,2));
								t1 = min(t1,pow(k - j,2));
							}else if(fn[k]){
								tn = min(t1,pow(k - i,2));
								tn = min(t1,pow(k - j,2));
							}
						}
						ans = min(ans,t1 + tn);
					}
				}
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}

