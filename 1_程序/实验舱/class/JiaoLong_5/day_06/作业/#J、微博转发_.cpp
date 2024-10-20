#include<bits/stdc++.h>
using namespace std;

int n,l,m,t,k,ans = 0;
vector<int> a[1005];
int cen[1005] = {0};
bool vis[1005];
queue<int> q;

void bfs(int w){
	ans = 0;
	while(q.size()) q.pop();
	q.push(w);
	while(q.size()){
		int u = q.front();
		q.pop();
		if(!vis[u]){
			vis[u] = 1;
			if(cen[u] <= l){
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
		bfs(t);
		for(int i = 0;i < 1004;i++)
			cen[i] = vis[i] = 0;
		printf("%d\n",-- ans);
	}

	return 0;
}

