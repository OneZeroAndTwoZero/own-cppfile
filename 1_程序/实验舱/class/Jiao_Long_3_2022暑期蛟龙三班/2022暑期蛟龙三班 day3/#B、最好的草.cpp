#include<bits/stdc++.h>
using namespace std;

int r,c;
char a[101][101] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
	a[x][y] = '.';
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < r && ty < c && a[tx][ty] == '#'){
			dfs(tx,ty);
		}
	}
}

int main(){
	cin >> r >> c;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			if(a[i][j] == '#'){
				sum ++;
				dfs(i,j);
			}
		}
	}
	cout << sum << endl;

	return 0;
}

