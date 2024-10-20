#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x3f3f3f3f;
int u,v;
vector<int> a[100005];
int cnt[100005] = {0};
bool vis[100005] = {0};
int dp[100005] = {0};
vector<int> tem;
vector<int> w;

bool check(int a){
	bool res = 1;
	while(a){
		if(a % 10 != 4 && a % 10 != 7){
			res = 0;
			break;
		}
		a /= 10;
	}
	return res;
}

int dfs(int u){
	int res = 1;
	for(auto && i : a[u]){
		if(!vis[i]){
			vis[i] = 1;
			res += dfs(i);
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i ++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i = 1;i <= n;i ++){
		if(!vis[i]){
			vis[i] = 1;
			int pos = dfs(i);
			if(pos * pos <= n){
				cnt[pos] ++;
			}else{
				tem.push_back(pos);
				w.push_back(1);
			}
		}
	}
	for(int i = 1;i <= n / i;i ++){
		if(!cnt[i]) continue;
		int k = 1;
		while(k <= cnt[i]){
			tem.push_back(k * i);
			w.push_back(k);
			cnt[i] -= k;
			k *= 2;
		}
		if(cnt[i]){
			tem.push_back(cnt[i] * i);
			w.push_back(cnt[i]);
		}
	}
	for(int i = 0;i <= n;i ++) dp[i] = 0x3f3f3f3f;
	dp[0] = 0;
	for(int i = 0;i < tem.size();i ++){
		for(int j = n;j >= tem[i];j --){
			dp[j] = min(dp[j],dp[j - tem[i]] + w[i]);
		}
	}
	for(int i = 1;i <= n;i ++){
		if(check(i)){
			ans = min(ans,dp[i]);
		}
	}
	if(ans > n) printf("-1\n");
	else printf("%d\n",ans - 1);

	return 0;
}
