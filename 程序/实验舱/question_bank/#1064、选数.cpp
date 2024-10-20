#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;
int a[105] = {0};

bool check(int a){
	if(a < 2) return 0;
	for(int i = 2;i * i <= a;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

void dfs(int r,int sum,int num){
	if(r == n){
		if(num == k){
			if(check(sum)) ans ++;
		}
		return;
	}
	dfs(r + 1,sum,num);
	dfs(r + 1,sum + a[r],num + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,0);
	printf("%d\n",ans);

	return 0;
}
