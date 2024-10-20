#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
string a[1000];
int dir[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};

void dfs(int x,int y){
	a[x][y] = '.';
	for(int i = 0;i < 8;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m && a[tx][ty] == 'W'){
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){	
		for(int j = 0;j < m;j++){
			if(a[i][j] == 'W'){
				dfs(i,j);
				ans ++;
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

