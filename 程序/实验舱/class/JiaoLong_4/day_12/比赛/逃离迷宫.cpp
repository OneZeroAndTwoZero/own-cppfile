#include<bits/stdc++.h>
using namespace std;

int n,m,t,sx,sy;
string s;
char a[105][105];
bool ok[105][105] = {0};
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
bool ans = 0;

void dfs(int x,int y,int step){
	if(a[x][y] == 'D'){
		if(step == t){
			ans = 1;
			return;
		}
	}
	if(step >= t || ans == 1){
		return;
	}
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m){
			if(!ok[tx][ty] && a[tx][ty] != 'X'){
			    ok[tx][ty] = 1;
				dfs(tx,ty,step + 1);
				ok[tx][ty] = 0;
			}
		}
	}
}

int main(){
	while(1){
		scanf("%d %d %d",&n,&m,&t);
		if(n == 0 && m == 0 && t == 0) break;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			for(int j = 0;j < m;j++){
				if(a[i][j] == 'S'){
					sx = i,sy = j;
					break;
				}
			}
		}
		ans = 0;
		ok[sx][sy] = 1;
		dfs(sx,sy,0);
		if(ans){
			puts("YES");
		}else{
			puts("NO");
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				ok[i][j] = 0;
				a[i][j] = ' ';
			}
		}
	}

	return 0;
}

