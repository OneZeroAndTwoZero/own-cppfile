#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[600005] = {0};
int ans,now[3] = {0};

void dfs(int k,int num){
	if(k == n){
		if(num == 3 && now[2] - now[0] <= x) ans ++;
		return;
	}
	if(num < 3){
		now[num] = a[k];
		dfs(k + 1,num + 1);
	}
	dfs(k + 1,num);
}

int main(){
	scanf("%d %d",&n,&x);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	dfs(0,0);
	printf("%d\n",ans);

	return 0;
}

