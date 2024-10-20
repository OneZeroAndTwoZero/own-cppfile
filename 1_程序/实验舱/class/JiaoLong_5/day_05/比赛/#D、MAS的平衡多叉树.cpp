#include<bits/stdc++.h>
using namespace std;

int t,n,u,v;
vector<int> a[105];
int max_[105] = {0},min_[105] = {0};
unordered_map<int,bool> vis;

int cz(int now){
	bool re = 0;
	for(int i = 0;i < a[now].size();i++){
		if(vis[a[now][i]] == 0){
			re = 1;
			vis[a[now][i]] = 1;
			int tem = cz(a[now][i]) + 1;
			max_[now] = max(tem,max_[now]);
			min_[now] = min(tem,min_[now]);
		}
	}
	if(!re){
		min_[now] = 0;
		return 0;
	}
	else return max_[now];
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		for(int i = 0;i <= n + 1;i++){
			a[i].clear();
			min_[i] = 100000000;
			max_[i] = 0;
			vis[i] = 0;
		}
		for(int i = 0;i < n - 1;i++){
			scanf("%d %d",&u,&v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		vis[1] = 1;
		cz(1);
		bool ans = 1;
		for(int i = 1;i <= n;i++){
			if(max_[i] - min_[i] > 1){
				ans = 0;
				break;
			}
		}
		if(ans) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

