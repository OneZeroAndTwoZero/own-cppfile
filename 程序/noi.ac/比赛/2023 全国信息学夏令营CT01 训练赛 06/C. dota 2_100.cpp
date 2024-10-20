#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[200005] = {0};
int b[200005] = {0};
long long ans[200005][15][15] = {0};
bool vis[200005][15][15] = {0};

long long dfs(int u,int c1,int c2){
	if(vis[u][c1][c2]) return ans[u][c1][c2];
	vis[u][c1][c2] = 1;
	if(u > 2 * n) return 0;
	long long res = -1 * dfs(u + 1,c1,c2);
	int pos1 = c1 + (u / 2 - c2),pos2 = c2 + ((u + 1) / 2 - c1);
	if(u % 2 == 1 && c1 < k && pos1 < n)
		res = max(res,(long long)a[pos1 + 1] - dfs(u + 1,c1 + 1,c2));
	if(u % 2 == 0 && c2 < k && pos2 < n)
		res = max(res,(long long)b[pos2 + 1] - dfs(u + 1,c1,c2 + 1));
	ans[u][c1][c2] = res;
	return res;
}

bool cmp(int a,int b){
	return a > b;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	for(int i = 1;i <= n;i ++) scanf("%d",&a[i]);
	for(int i = 1;i <= n;i ++) scanf("%d",&b[i]);
	sort(a + 1,a + n + 1,cmp);
	sort(b + 1,b + n + 1,cmp);
	printf("%lld\n",dfs(1,0,0));

	return 0;
}