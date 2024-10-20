#include<bits/stdc++.h>
using namespace std;

long long ans = 0;
int n,k;
long long a[1005] = {0};
int check[1005] = {0};

void dfs(int u,long long sum){
	if(u == n + 1){
		for(int i = k;i <= n;i ++){
			if(check[i] - check[i - k] > 2) return;
		}
		ans = max(ans,sum);
		return;
	}
	check[u] = check[u - 1];
	dfs(u + 1,sum);
	check[u] = check[u - 1] + 1;
	dfs(u + 1,sum + a[u - 1]);
	check[u] = 0;
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		scanf("%lld",&a[i]);
	}
	dfs(1,0);
	printf("%lld\n",ans);

	return 0;
}

