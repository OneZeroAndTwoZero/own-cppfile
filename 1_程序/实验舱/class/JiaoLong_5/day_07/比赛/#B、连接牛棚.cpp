#include<bits/stdc++.h>
using namespace std;

int t,n,m,u,v;
long long ans = 0,t1,tn;
vector<int> a[500005];
bool vis[500005] = {0};
bool f1[500005],fn[500005];
vector<int> ff1,ffn;
int lt[500005] = {0},pos = 1;

void dfs(int u,int f){
	vis[u] = 1;
	if(f == 1) f1[u] = 1,ff1.push_back(u);
	else fn[u] = 1,ffn.push_back(u);
	for(auto &&i : a[u]){
		if(!vis[i]) dfs(i,f);
	}
}

void dfs2(int u){
	auto pos_ = lower_bound(ff1.begin(),ff1.end(),u);
	auto pos__ = pos_;
	if(pos_ != ff1.begin()) pos_ --;
	t1 = min(t1,(long long)pow((long long)min(*pos__ - u,u - *pos_),2));
	cout << t1 << " " << *pos__ - u << " " << u - *pos_ << endl;
	pos_ = lower_bound(ffn.begin(),ffn.end(),u);
	pos__ = pos_;
	if(pos_ != ffn.begin()) pos_ --;
	tn = min(t1,(long long)pow((long long)min(*pos__ - u,u - *pos_),2));
	lt[u] = pos;
	vis[u] = 1;
	for(auto && i : a[u]){
		if(!vis[i]) dfs2(i);
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
		ans = 10000000000000;
		sort(ff1.begin(),ff1.end());
		sort(ffn.begin(),ffn.end());
		for(int i = 1;i <= n;i++){
			if(!ff1[i] && !ffn[i] && lt[i] == 0){
				t1 = 100000000000,tn = 100000000000;
				dfs2(i);
				ans = min(ans,t1 + tn);
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}

