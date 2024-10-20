#include<bits/stdc++.h>
using namespace std;

int n,b,cnt = 0;
char ans[100] = {"        \0"};
int a[100],a2[100],a3[100];

void dfs(int k){
	if(k == n){
		cnt ++;
		if(cnt == b){
			puts(ans);
		}
		return;
	}
	for(int i = 0;i < n;i ++){
		if(!a[i] && !a2[k + i] && !a3[k - i + n]){
			ans[k] = i + 1 + '0';
			a[i] = a2[k + i] = a3[k - i + n] = 1;
			dfs(k + 1);
			a[i] = a2[k + i] = a3[k - i + n] = 0;
		}
	}
}

int main(){
	n = 8;
	scanf("%d",&b);
	dfs(0);

	return 0;
}

