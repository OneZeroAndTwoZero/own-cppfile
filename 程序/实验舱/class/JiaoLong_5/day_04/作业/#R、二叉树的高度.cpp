#include<bits/stdc++.h>
using namespace std;

int n,x,y,ans;
vector<int> a[1000005];
int d[1000005];

void dfs(int k){
	ans = max(d[k],ans);
	for(auto &&i : a[k]){
		d[i] = d[k] + 1;
		dfs(i);
	}
}

int main(){
	scanf("%d",&n);
	d[1] = 0;
	for(int i = 0;i < n - 1;i++){
		scanf("%d %d",&x,&y);
		a[x].push_back(y);
	}
	dfs(1);
	printf("%d\n",ans);

	return 0;
}

