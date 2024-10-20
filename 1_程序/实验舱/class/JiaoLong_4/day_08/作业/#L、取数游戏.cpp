#include<bits/stdc++.h>
using namespace std;

int t,n,m,ans;
int a[15][15] = {0};
int dir[8][2] = {{0,1},{0,-1},{-1,0},{-1,-1},{-1,1},{1,0},{1,-1},{1,1}};
bool vis[10][10] = {0};

void dfs(int x,int y,int sum){
	vis[x][y] = 1;
	if(sum > ans) ans = sum;
	for(int i = 0;i < 8;i++){
		int tx = x + dir[i][0],ty = dir[i][1] + y;
		if(tx >= 0 && ty >= 0 && tx < n && ty < m){
			vis[tx][ty] = 1;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(!vis[i][j]){
				dfs(i,j,sum + a[i][j]);
			}
		}
	}
	vis[x][y] = 0;
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		ans = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				dfs(i,j,a[i][j]);
				memset(vis,0,sizeof(vis));
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}

