#include<bits/stdc++.h>
using namespace std;

int n;
int ans[100] = {0};

void dfs(int a,int k){
	if(a == 1){
		if(k > 1){
		    printf("%d=%d",n,ans[0]);
		    for(int i = 1;i < k;i++){
		    	printf("*%d",ans[i]);
			}
			puts("");
		}
		return;
	}
	for(int i = k == 0 ? 2 : ans[k - 1];i <= a;i ++){
		if(a % i == 0){
			ans[k] = i;
			dfs(a / i,k + 1);
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(n,0);

	return 0;
}

