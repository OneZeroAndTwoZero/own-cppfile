#include<bits/stdc++.h>
using namespace std;

int dir[8][2] = {{-1,0},{-1,-1},{-1,1},{0,1},{0,-1},{1,0},{1,1},{1,-1}};
int n;
bool a[20][20] = {0};
bool ok[20][20] = {0};
int ans = 0;
int ti,tj;

void dfs(int i,int j){
	if(!i && j == n - 1){
		ans ++;
		return;
	}
	ok[i][j] = 1;
	for(int k = 0;k < 8;k++){
		ti = i + dir[k][0];
		tj = j + dir[k][1];
		if(ti >= 0 && ti < n && tj >= 0 && tj < n){
			if(!a[ti][tj] && !ok[ti][tj]){
				dfs(ti,tj);
			}
		}
	}
	ok[i][j] = 0;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	dfs(0,0);
	printf("%d\n",ans);

	return 0;
}

