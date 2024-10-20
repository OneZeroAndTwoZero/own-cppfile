#include<bits/stdc++.h>
using namespace std;

int r,c,ans = 0;
int a[105][105] = {0},rec[105][105] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int dfs(int x,int y){
	if(rec[x][y]) return rec[x][y];
	for(int i = 0;i < 4;i ++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 1 && ty >= 1 && tx <= r && ty <= c && a[tx][ty] < a[x][y]){
			rec[x][y] = max(rec[x][y],dfs(tx,ty));
		}
	}
	rec[x][y] ++;
	return rec[x][y];
}

int main(){
	scanf("%d %d",&r,&c);
	for(int i = 1;i <= c;i ++){
		for(int j = 1;j <= c;j ++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= c;i ++){
		for(int j = 1;j <= c;j ++){
			ans = max(ans,dfs(i,j));
		}
	}
	printf("%d\n",ans);

	return 0;
}

