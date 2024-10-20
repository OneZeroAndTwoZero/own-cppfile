#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0;
int a[100],a2[100],a3[100];

void dfs(int k){
	if(k == n){
		ans ++;
		return;
	}
	for(int i = 0;i < n;i ++){
		if(!a[i] && !a2[k + 1 + i] && !a3[k + 1 - i + n]){
			a[i] = a2[k + 1 + i] = a3[k + 1 - i + n] = 1;
			dfs(k + 1);
			a[i] = a2[k + 1 + i] = a3[k + 1 - i + n] = 0;
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(0);
	printf("%d\n",ans);

	return 0;
}

