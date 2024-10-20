#include<bits/stdc++.h>
using namespace std;

int w,h,ans,sx,sy;
char a[25][25];
bool vis[25][25];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
	if(a[x][y] == '.') ans ++;
	for(int i = 0;i < 4;i ++){
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if(tx < 0 || ty < 0 || tx >= h || ty >= w) continue;
		if(a[tx][ty] != '.') continue;
		if(vis[tx][ty]) continue;
		vis[tx][ty] = 1;
		dfs(tx,ty);
	}
}

void __init(){
	ans = 0;
	for(int i = 0;i <= 20;i ++){
		for(int j = 0;j <= 20;j ++){
			vis[i][j] = 0;
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	while(1){
		scanf("%d %d",&w,&h);
		if(w == 0 && h == 0) return 0;
		__init();
		for(int i = 0;i < h;i ++){
			scanf("%s",a[i]);
			for(int j = 0;j < w;j ++){
				if(a[i][j] == '@'){
					sx = i,sy = j;
					vis[i][j] = 1;
					a[i][j] = '.';
				}
			}
		}
		dfs(sx,sy);
		printf("%d\n",ans);
	}

	return 0;
}