#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};
int n,need,ans = 0;

bool su(long long a){
	if(a == 2) return 1;
	if(a % 2 == 0 || a < 2) return 0;
	for(int i = 2;i <= a / i;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

void dfs(int k,long long sum,int now){
	if(k == n){
		if(now == need && su(sum)){
			ans ++;
		}
		return;
	}
	if(now > need) return;
	dfs(k + 1,sum + a[k],now + 1);
	dfs(k + 1,sum,now);
}

int main(){
	scanf("%d %d",&n,&need);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}

