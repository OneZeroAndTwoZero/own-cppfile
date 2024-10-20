#include<bits/stdc++.h>
using namespace std;

int k,n;
int num[100] = {0};
int ans[100] = {0};

void dfs(int r,int sum){
	if(r == k){
		if(sum == n){
			for(int i = 0;i < k;i++){
				printf("%d",ans[i]);
			}
			puts("");
	    }
		return;
	}
	for(int i = 0;i <= min(num[r],n - sum);i++){
		ans[r] = i;
		dfs(r + 1,sum + i);
	}
}

int main(){
	scanf("%d %d",&k,&n);
	for(int i = 0;i < k;i++){
		scanf("%d",&num[i]);
	}
	dfs(0,0);

	return 0;
}

