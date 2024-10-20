#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;
int a[105] = {0};

bool su(int a){
	if(a < 2) return 0;
	for(int i = 2;i * i <= a;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

void dfs(int k_,int sum,int num){
	if(k_ == n){
		if(num == k){
			if(su(sum)) ans ++;
		}
		return;
	}
	dfs(k_ + 1,sum,num);
	dfs(k_ + 1,sum + a[k_],num + 1);
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}

