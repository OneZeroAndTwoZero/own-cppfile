#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,ans = 0,cnt1,cnt2;
bool vis[200005] = {0};
int d[200005] = {0};
vector<int> a[200005];

void dfs(int s){
	cnt2 ++;
	vis[s] = 1;
	for(auto && i : a[s]){
		if(!vis[i]){
			dfs(i);
		}
	}
}

void tuopu(int s){
	queue<int> q;
	q.push(s);
	while(q.size()){
		cnt1 ++;
		int tem = q.front();
		q.pop();
		for(auto && i : a[tem]){
			d[i] --;
			if(!d[i]){
				q.push(i);
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		d[v] ++;
	}
	for(int i = 1;i <= n;i++){
		if(!vis[i]){
			cnt1 = 0,cnt2 = 0;
			tuopu(i);
			dfs(i);
			if(cnt1 != cnt2){
				ans += cnt2;
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

