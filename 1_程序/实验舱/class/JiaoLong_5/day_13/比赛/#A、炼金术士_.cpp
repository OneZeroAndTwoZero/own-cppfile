#include<bits/stdc++.h>
using namespace std;

int n,a,b,ans = 10000009;
int x[1005] = {0},y[1005] = {0},w[1005] = {0};

void dfs(int k,int suma,int sumb,int sumw){
	if(k == n){
		if(suma >= a && sumb >= b){
			ans = min(ans,sumw);
		}
		return;
	}
	dfs(k + 1,suma,sumb,sumw);
	dfs(k + 1,suma + x[k],sumb + y[k],sumw + w[k]);
}

int main(){
	scanf("%d %d %d",&n,&a,&b);
	for(int i = 0;i < n;i ++){
		scanf("%d %d %d",&x[i],&y[i],&w[i]);
	}
	dfs(0,0,0,0);
	printf("%d\n",ans);

	return 0;
}

