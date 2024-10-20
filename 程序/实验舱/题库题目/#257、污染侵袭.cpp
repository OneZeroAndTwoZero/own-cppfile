#include<bits/stdc++.h>
using namespace std;

int a[1005][1005],dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int vis[1005][1005];
int n,m;

void dfs(int x,int y){
	vis[x][y] = -1;
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m && vis[tx][ty] == 0){
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j] == 1) vis[i][j] = 1;
		}
	}
	for(int i = 0;i < n;i++){
		if(vis[i][0] == 0) dfs(i,0);
		if(vis[i][m - 1] == 0) dfs(i,m - 1);
	}
	for(int i = 0;i < m;i++){
		if(vis[0][i] == 0) dfs(0,i);
		if(vis[n - 1][i] == 0) dfs(n - 1,i);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			printf("%d ",vis[i][j] != -1);
		}
		printf("\n");
	}

	return 0;
}

