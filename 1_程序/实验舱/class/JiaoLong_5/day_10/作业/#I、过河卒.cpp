#include<bits/stdc++.h>
using namespace std;

int n,m,mx,my;
long long f[105][105] = {0};
int dir[8][2] = {{2,1},{1,2},{-2,1},{-1,2},{2,-1},{1,-2},{-2,-1},{-1,-2}};
bool vis[105][105] = {0};

int main(){
	scanf("%d %d %d %d",&n,&m,&mx,&my);
	vis[++ mx][++ my] = 1;
	f[1][1] = 1;
	for(int i = 0;i < 8;i ++){
		int tx = mx + dir[i][0],ty = my + dir[i][1];
		if(tx >= 1 && tx <= n && ty >= 1 && ty <= m){
			vis[tx][ty] = 1;
			f[tx][ty] = 0;
		}
	}
	for(int i = 1;i <= n + 1;i ++){
		for(int j = 1;j <= m + 1;j++){
			if(!vis[i][j] && (i != 1 || j != 1)){
				f[i][j] = f[i - 1][j] + f[i][j - 1];
			}
		}
	}
	printf("%lld\n",f[n + 1][m + 1]);

	return 0;
}

