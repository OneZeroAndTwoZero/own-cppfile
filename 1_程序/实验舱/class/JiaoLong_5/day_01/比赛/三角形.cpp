#include<bits/stdc++.h>
using namespace std;

int n,now;
int a[3][250005] = {0};
bool vis[3][250005] = {0};
long long ans = 0;
int dir1[3][2] = {{0,-1},{0,1},{1,0}};
int dir2[3][2] = {{0,1},{0,-1},{-1,0}};
int dir3[3][2] = {{0,1},{0,-1},{0,0}};

void dfs(int x,int y){
	vis[x][y] = 1;
	now += 1;
	for(int i = 0;i < 3;i++){
		int tx,ty;
		if(x == 0 && y % 2 == 0){
			tx = x + dir1[i][0],ty = y + dir1[i][1];
		}else if(x == 1 && y % 2 == 0){
			tx = x + dir2[i][0],ty = y + dir2[i][1];
		}else{
			tx = x + dir3[i][0],ty = y + dir3[i][1];
		}
		if(tx >= 0 && tx < 2 && ty >= 0 && ty < n && vis[tx][ty] == 0 && a[tx][ty] == 1){
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < n;j++){
			if(a[i][j] && !vis[i][j]){
				now = 0;
				dfs(i,j);
				ans += now + 2;
			}
		}
	}
	printf("%lld\n",ans);

	return 0;
}

