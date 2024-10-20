#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[100][100],v[100][100];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
    if(a[x][y] || v[x][y]) return;
	v[x][y] = 1;
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < n && !v[tx][ty] && !a[tx][ty]){
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < n;i++){	
		dfs(0,i);
		dfs(n - 1,i);
		dfs(i,0);
		dfs(i,n - 1);
	}for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(!v[i][j] &&!a[i][j]) ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

