#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
char a[505][505];
int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};

void dfs(int x,int y){
	a[x][y] = '0';
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m && a[tx][ty] == '1'){
			dfs(tx,ty);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j] == '1'){
				ans ++;
				dfs(i,j);
			}
		}
	}
	cout << ans << endl;

	return 0;
}

