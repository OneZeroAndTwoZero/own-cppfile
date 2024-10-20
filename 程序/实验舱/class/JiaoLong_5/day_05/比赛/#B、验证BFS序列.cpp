#include<bits/stdc++.h>
using namespace std;

vector<int> a[100005];
vector<int> c[100005];
int num[100005] = {0};
int check[100005] = {0};
int n,t,u,v;
unordered_map<int,bool> vis;

void cz(int k,int now){
	for(int i = 0;i < a[now].size();i++){
		if(vis[a[now][i]] == 0){
			vis[a[now][i]] = 1;
			num[k + 1] ++;
			c[k + 1].push_back(a[now][i]);
			cz(k + 1,a[now][i]);
		}
	}
}

int main(){
	scanf("%d %d",&n,&t);
	for(int i = 0;i < n - 1;i++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	num[0] = 1,c[0].push_back(1),vis[1] = 1;
	cz(0,1);
	for(int i = 0;i < 100003;i++){
		sort(c[i].begin(),c[i].begin() + num[i]);
	}
	while(t --){
		for(int i = 0;i < n;i++){
			scanf("%d",&check[i]);
		}
		int now = 0;
		int cen = 0;
		bool ans = 1;
		while(now < n){
			sort(check + now,check + now + num[cen]);
			for(int i = now;i < now + num[cen];i++){
				if(c[cen][i - now] != check[i]){
					ans = 0;
					break;
				}
			}
			if(!ans) break;
			now += num[cen];
			cen ++;
		}
		if(ans){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}

	return 0;
}

