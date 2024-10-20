#include<bits/stdc++.h>
using namespace std;

int n,m,s,t,u,v;
bool vis[100005] = {0};
vector<int> a[100005];
int ans[100005] = {0};
queue<int> q;

void bfs(int st){
	q.push(st);
	while(q.size()){
		u = q.front();
		q.pop();
		if(!vis[u]){
			vis[u] = 1;
			for(auto && i : a[u]){
				if(!ans[i]) ans[i] = ans[u] + 1;
				q.push(i);
			}
		}
	}
}

int main(){
	scanf("%d %d %d %d",&n,&m,&s,&t);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 0;i < n;i++){
		bfs(s);
	}
	if(!ans[t]){
		printf("IMPOSSIBLE\n");
	}else{
		printf("%d\n",ans[t]);
	}

	return 0;
}

