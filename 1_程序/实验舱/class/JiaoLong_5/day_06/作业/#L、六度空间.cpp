#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,ans = 0;
vector<int> a[10005];
int cen[10005] = {0};
bool vis[10005];


void bfs(int w){
	queue<int> q;
	q.push(w);
	while(q.size()){
		int u = q.front();
		q.pop();
		if(!vis[u]){
			vis[u] = 1;
			if(cen[u] <= 7){
				ans ++;
				for(auto && i : a[u]){
					q.push(i);
					if(cen[i] == 0)
						cen[i] = cen[u] + 1;
				}
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 1;i <= n;i++){
		cen[i] = 1;
		ans = 0;
		bfs(i);
		for(int i = 0;i < 10004;i++)
			cen[i] = vis[i] = 0;
		printf("%d: %.2lf%%\n",i,(double)ans * 100.0 / n);
	}

	return 0;
}

