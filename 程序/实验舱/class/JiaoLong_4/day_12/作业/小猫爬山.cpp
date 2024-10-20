#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
long long w;
int n,ans = 10000;

void dfs(int che,int k,long long now){
	if(k == n){
		ans = min(ans,che);
		return;
	}
	if(che > ans) return;
	
	if(now + a[k] <= w) dfs(che,k + 1,now + a[k]);
	dfs(che + 1,k + 1,a[k]);
}

int main(){
	scanf("%d %lld",&n,&w);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}

