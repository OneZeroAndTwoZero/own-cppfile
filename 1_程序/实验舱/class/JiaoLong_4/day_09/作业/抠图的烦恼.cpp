#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int a[1000][1000];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    if(!a[x][y]) return;
    a[x][y] = 0;
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m && a[tx][ty]){
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < n;i++){
		dfs(i,0);
		dfs(i,m - 1);
	}
	for(int i = 0;i < m;i++){
		dfs(0,i);
		dfs(n - 1,i);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			printf("%d ",a[i][j]);
		}
		puts("");
	}

	return 0;
}

