#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0;
int a[100];

bool check(int i,int j){
	for(int k = 0;k < i;k++){
		if(a[k] == j) return 0;
		if(a[k] + k == i + j && abs(i - k) < 3) return 0;
		if(a[k] - k == j - i && abs(i - k) < 3) return 0;
	}
	return 1;
}

void dfs(int k){
	if(k == n){
		ans ++;
		return;
	}
	for(int i = 0;i < n;i ++){
		if(check(k,i)){
			a[k] = i;
			dfs(k + 1);
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(0);
	printf("%d\n",ans);

	return 0;
}

