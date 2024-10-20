#include<bits/stdc++.h>
using namespace std;

char ch[15][15];
int a[15][15] = {0};
bool h[15][15] = {0},l[15][15] = {0},g[15][15] = {0};

int cz(int x,int y){
	if(x == 8 && y == 8) return -101;
	if(y == 8) return (x + 1) * 100;
	return x * 100 + y + 1;
}

int ge(int x,int y){
	x /= 3,y /= 3;
	return x * 3 + y;
}

void dfs(int x,int y){
	//cout << x << ";;" << y << " " << a[x][y] << endl;
	if(x == -1 && y == -1){
		for(int i = 0;i < 9;i ++){
			for(int j = 0;j < 9;j ++){
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
		return;
	}
	int tx = cz(x,y),ty;
	ty = tx % 10;
	tx /= 100;
	if(a[x][y] != -1){
		dfs(tx,ty);
	}else{
		for(int i = 1;i <= 9;i ++){
			if(h[x][i] == 0 && l[y][i] == 0 && g[ge(x,y)][i] == 0){
				//cout << x << " " << y << " " << i << endl;
				h[x][i] = 1,l[y][i] = 1,g[ge(x,y)][i] = 1;
				a[x][y] = i;
				dfs(tx,ty);
				a[x][y] = -1;
				h[x][i] = 0,l[y][i] = 0,g[ge(x,y)][i] = 0;
			}
		}
	}
}

int main(){
	for(int i = 0;i < 9;i ++){
		scanf("%s",&ch[i]);
		for(int j = 0;j < 9;j ++){
			if(ch[i][j] != '.'){
				a[i][j] = ch[i][j] - '0';
				h[i][a[i][j]] = 1,l[j][a[i][j]] = 1,g[ge(i,j)][a[i][j]] = 1;
			}else{
				a[i][j] = -1;
			}
		}
	}
	dfs(0,0);

	return 0;
}

