#include<bits/stdc++.h>
using namespace std;

int ans[100] = {0};
int n;

void dfs(int k,int sum){
	if(sum == n && k != 1){
		for(int i = 0;i < k - 1;i++){
			printf("%d+",ans[i]);
		}
		printf("%d\n",ans[k - 1]);
		return;
	}
	for(int i = k == 0 ? 1 : ans[k - 1];i <= n - sum;i ++){
		ans[k] = i;
		dfs(k + 1,sum + i);
	}
}

int main(){
	scanf("%d",&n);
	dfs(0,0);

	return 0;
}

