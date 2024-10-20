#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;

void dfs(int c,int sum,int st){
	if(c == k + 1 && sum == n){
	    ans ++;
	    return;
	}
	for(int i = st;i <= n - sum;i ++){
		dfs(c + 1,sum + i,i);
	}
}

int main(){
	scanf("%d %d",&n,&k);
	dfs(1,0,1);
	printf("%d\n",ans);

	return 0;
}

