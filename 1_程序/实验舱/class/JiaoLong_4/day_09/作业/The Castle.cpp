#include<bits/stdc++.h>
using namespace std;

int n,m,t,ans = 0,max_ = 0,k = 1;
int a[500][500];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y){
	a[x][y] = 1;
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m && !a[tx][ty]){
			if((x % 2) && (y % 2)){
			    k ++;
			}
			dfs(tx,ty);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&t);
			if(t / 8){
				t -= 8;
				a[i * 2 + 2][j * 2 + 1] = 1;
				a[i * 2 + 2][j * 2] = 1;
				a[i * 2 + 2][j * 2 + 2] = 1;
			}
			if(t / 4){
				t -= 4;
				a[i * 2 + 1][j * 2 + 2] = 1;
				a[i * 2 + 2][j * 2 + 2] = 1;
				a[i * 2][j * 2 + 2] = 1;
			}
			if(t / 2){
				t -= 2;
				a[i * 2][j * 2 + 2] = 1;
				a[i * 2][j * 2 + 1] = 1;
				a[i * 2][j * 2] = 1;
			}
			if(t / 1){
				t --;
				a[i * 2 + 1][j * 2] = 1;
				a[i * 2 + 2][j * 2] = 1;
				a[i * 2][j * 2] = 1;
			}
		}
	}
	n = (n << 1) + 1,m = (m << 1) + 1;
	for(int i = 0;i < n;i++){	
		for(int j = 0;j < m;j++){
			if(!a[i][j]){
				dfs(i,j);
				ans ++;
				max_ = max(k,max_);
				k = 1;
			}
		}
	}
	printf("%d\n",ans);
	printf("%d\n",max_);

	return 0;
}

