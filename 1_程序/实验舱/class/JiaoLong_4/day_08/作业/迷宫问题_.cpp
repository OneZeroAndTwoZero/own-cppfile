#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[100][100];
int ok[100][100];
int dir[8][2] = {{0,-1},{1,0},{-1,1},{0,1},{1,1},{-1,0},{-1,-1},{1,-1}};

void dfs(int x,int y){
	if(!x && y == n - 1){
		ans ++;
		return;
	}
	ok[x][y] = 1;
	for(int i = 0;i < 8;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && tx < n && ty >= 0 && ty < n && !a[tx][ty] && !ok[tx][ty]){
			dfs(tx,ty);
		}
	}
	ok[x][y] = 0;
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

