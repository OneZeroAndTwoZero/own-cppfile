#include<bits/stdc++.h>
using namespace std;

int n,b,ans = 0;
int zhi[10][10];
int l[100],a[100],a2[100],a3[100];

void dfs(int k){
	if(k == n){
		b = 0;
		for(int i = 0;i < n;i++){
			b += zhi[i][l[i]];
		}
		ans = max(ans,b);
		return;
	}
	for(int i = 0;i < n;i ++){
		if(!a[i] && !a2[k + i] && !a3[k - i + n]){
			l[k] = i;
			a[i] = a2[k + i] = a3[k - i + n] = 1;
			dfs(k + 1);
			a[i] = a2[k + i] = a3[k - i + n] = 0;
		}
	}
}

int main(){
	n = 8;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&zhi[i][j]);
		}
	}
	dfs(0);
	printf("%d",ans);

	return 0;
}

