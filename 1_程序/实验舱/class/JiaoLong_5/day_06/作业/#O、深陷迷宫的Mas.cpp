#include<bits/stdc++.h>
using namespace std;

int n,m,s,u,v;
bool vis[100005] = {0};
vector<int> a[100005];
queue<int> q;
int d[100005] = {0},cen[100005] = {0};

void bfs(){
	q.push(s);
	while(q.size()){
		u = q.front();
		q.pop();
		if(!vis[u]){
			vis[u] = 1;
			d[cen[u]] ++;
			for(auto && i : a[u]){
				q.push(i);
				if(cen[i] == 0 && i != s) cen[i] = cen[u] + 1;
			}
		}
	}
}

int main(){
	scanf("%d %d %d",&n,&m,&s);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	bfs();
	d[0] = 0;
	for(int i = 1;i <= n;i++){
		d[i] = d[i - 1] + d[i];
		printf("%d ",d[i]);
	}

	return 0;
}

