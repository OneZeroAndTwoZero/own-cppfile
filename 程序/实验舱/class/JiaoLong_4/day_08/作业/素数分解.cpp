#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0;
int check[100] = {0};

bool ok(int a){
	if(a == 2 || a == 5) return 1;
	if(a % 2 == 0 || a % 5 == 0 || a < 2) return 0;
	int c = sqrt(a);
	for(int i = 2;i <= c;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

void dfs(int k,int sum){
	if(sum == n){
		ans = max(ans,k);
		return;
	}
	for(int i = k == 0 ? 1 : check[k - 1] + 1;i <= n - sum;i++){
		if(ok(i)){
			check[k] = i;
			dfs(k + 1,sum + i);
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(0,0);
	printf("%d\n",ans);

	return 0;
}

