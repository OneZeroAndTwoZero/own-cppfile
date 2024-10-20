#include<bits/stdc++.h>
using namespace std;

int n,m = 100000;
int a[100] = {0},ans[100] = {0};
bool r[100];

int check(){
	int re = 0;
	for(int i = 0;i < n - 1;i ++){
		re += abs((ans[i] / 10) - (ans[i] % 10));
		re += abs((ans[i] % 10) - ans[i + 1] / 10);
	}
	re += abs((ans[n - 1] / 10) - (ans[n - 1] % 10));
	return re;
}

void dfs(int k){
	if(k == n){
		m = min(m,check());
		return;
	}
	for(int i = 0;i < n;i++){
		if(!r[i]){
			r[i] = 1;
			ans[k] = a[i];
			dfs(k + 1);
			r[i] = 0;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0);
	printf("%d\n",m);

	return 0;
}

