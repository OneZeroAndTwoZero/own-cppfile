#include<bits/stdc++.h>
using namespace std;

int t;
int n,m;
bool a[1005][1005] = {0};
bool ok[1005][1005] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int sum = 0,xmax,xmin,ymax,ymin;
string tem;

void dfs(int x,int y){
	ok[x][y] = 1;
	sum ++;
	if(x > xmax) xmax = x;
	if(y > ymax) ymax = y;
	if(x < xmin) xmin = x;
	if(y < ymin) ymin = y;
	for(int i = 0;i < 4;i++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(tx >= 0 && ty >= 0 && tx < n && ty < m){
			if(!ok[tx][ty] && a[tx][ty]){
				dfs(tx,ty);
			}
		}
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i < n;i++){
			cin >> tem;
			for(int j = 0;j < m;j++){
				if(tem[j] == '1'){
					a[i][j] = 1;
				}else{
					a[i][j] = 0;
				}
			}
		}
		bool pd = 1;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(a[i][j] && !ok[i][j]){
					sum = 0,xmax = -1000,xmin = 1000,ymax = -1000,ymin = 1000;
					dfs(i,j);
					int d1 = abs(xmax - xmin) + 1;
					int d2 = abs(ymax - ymin) + 1;
					if(d1 * d2 != sum) pd = 0;
				}
			}
		}
		if(pd){
			puts("YES");
		}else{
			puts("NO");
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				a[i][j] = 0;
				ok[i][j] = 0;
			}
		}
	}

	return 0;
}

