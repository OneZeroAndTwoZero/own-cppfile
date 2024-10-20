#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int x[205] = {0},y[205] = {0};

void dfs(int k,int sumx,int sumy){
	if(k == n){
		if(sumx >= 0 && sumy >= 0) ans = max(ans,sumx + sumy);
		return;
	}
	dfs(k + 1,sumx,sumy);
	dfs(k + 1,sumx + x[k],sumy + y[k]);
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&x[i],&y[i]);
	}
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}

